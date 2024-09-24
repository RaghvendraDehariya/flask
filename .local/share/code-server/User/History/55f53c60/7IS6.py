from flask import Flask, render_templetes, request

app = Flask(__name__)

@app.route("/")

def index():
    return render_templetes("index.html")