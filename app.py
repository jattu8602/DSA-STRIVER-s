from flask import Flask, render_template, request

app = Flask(_name_)

entries = []

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/submit', methods=['POST'])
def submit_entry():
    notes = request.form['notes']
    text = request.form['text']
    link = request.form['link']
    # Handle image upload (store file or link)
    image = request.files['image']
    # Save or process the image as needed

    # Create a dictionary to store the entry
    entry = {
        'notes': notes,
        'text': text,
        'link': link,
        # Store image data or link here
    }
    entries.append(entry)
    return 'Entry submitted successfully!'

if _name_ == '_main_':
    app.run(debug=True)