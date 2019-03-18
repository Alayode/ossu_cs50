# Chris Samuel
# @chrisksamuel

# With Flask, we can write the following in an application.py file:

from flask import Flask, render_template, request

# we initialize a Flask Application for our application.py file. Then, we use the @app.route("/")
# syntax to indicate that the function below will respond to any request for / or the root of our site.

app = Flask(__name__)

@app.route("/")
def index():
    return render_template("index.html")
