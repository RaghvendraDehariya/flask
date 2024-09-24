from flask import Flask, render_template, request

app = Flask(__name__)

# @app.route("/")
# def index():
#     return render_template("index.html")

# @app.route("/greet" ,methods = ["POST"])
# def greet():
#     name = request.form.get("name","world")
#     return render_template("greet.html",name = request.args.get("name","world"))
    
#another technic to get and post
@app.route("/",methods = ["GET","POST"])
def index():
    if request.args == "GET":
        return render_template("index.html")
    elif request.args == "POST":
        return render_template("greet.html")