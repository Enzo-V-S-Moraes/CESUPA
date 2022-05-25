namespace LibraryClient-Grpc.Models
{
    public class BookModel
{
    public BookModel(int id, string name, string type)
    {
        Id = id;
        Name = name;
        Type = Type;
    }
    public int Id { get; set; }
    public string Name { get; set; }
    public string Type { get; set; }
}
}