using LibraryClient;
using LibraryClient.Models;
using Grpc.Core;

namespace LibraryClient.Services
{
    public class LibraryClient : LibraryClientGrpc.LibraryClientGrpcBase
    {
        public static readonly List<BookModel> Library = new List<BookModel>
        {
            new BookModel(0, "As 20 mil léguas submarinas", "Ficção" ),
            new BookModel(1, "Viagem ao centro da Terra", "Ficção" ),
            new BookModel(2, "It: a coisa", "Ficção" ),
        };

        public override Task<Books> SelectAll(Empty request, ServerCallContext context)
        {
            Books respondeData = new Books();
            var query = from liv in Library
                        select new Book()
                        {
                            BookID = liv.Id,
                            Name = liv.Name,
                            Type = liv.Type,
                        };

            respondeData.Items.AddRange(query.ToArray());

            return Task.FromResult(respondeData);
        }

        public override Task<Empty> Insert(Book request, ServerCallContext context)
        {
            Library.Add(new BookModel(request.BookID, request.Name, request.Type));

            return Task.FromResult(new Empty());
        }

        public override Task<Book> SelectByID(BookFilter request, ServerCallContext context)
        {
            var data = Library.Find(book => book.Id == request.bookID);

            Book book = new Book() { BookID = data.Id, Name = data.Name, Type = data.Type };

            return Task.FromResult(book);
        }

        public override Task<Empty> Update(Book request, ServerCallContext context)
        {
            var data = Library.FirstOrDefault(book => book.Id == request.BookID);

            if (data is not null)
            {
                data.Name = request.Name;
                data.Type = request.Type;
            }

            return Task.FromResult(new Empty());
        }

        public override Task<Empty> Delete(BookFilter request, ServerCallContext context)
        {
            var data = Library.FirstOrDefault(book => book.Id == request.BookID);

            if (data is not null)
                Library.Remove(data);

            return Task.FromResult(new Empty());
        }
    }
}