# Chris Samuel Python - An Introduction a simple web server program

# server.py
from flask import Flask
app = Flask(__name__)

@app.route("/")
def hello():
    return "Hello World!"