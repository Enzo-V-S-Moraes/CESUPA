//coderunner
//npm init
//npm i express
//npm i mongoose
//npm i nodemon -D
//Thunder Client

function casadaClick() {
    asjdnasld
    asjldasd
}

const express = require('express');
const mongoose = require('mongoose');
const Schema = mongoose.Schema;

const UserModel = new Schema ({
    name: String,
    email: String,
    password: String,
    age: Number
});
const User = mongoose.model("User",UserModel);


const app = express();
const connection = mongoose.connect("mongodb+srv://Guerreiro3v7:2907@cluster0.y0pnl.mongodb.net/myFirstDatabase?retryWrites=true&w=majority");

app.get('/user',function(req,res){
    const dados = User.find();

    res.json(dados);
});

res.

app.post('/user',function(req,res){
    const dados = req.body;
    const user = User.create(dados);
    res.json(user);
});


app.use(express.json());


app.listen(3000);