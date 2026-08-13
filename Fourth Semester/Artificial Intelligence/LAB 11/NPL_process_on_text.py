import nltk
from nltk.tokenize import word_tokenize
from nltk.corpus import stopwords
from nltk.stem import PorterStemmer, WordNetLemmatizer
from nltk import pos_tag

nltk.download('punkt')
nltk.download('punkt_tab')
nltk.download('stopwords')
nltk.download('wordnet')
nltk.download('averaged_perceptron_tagger')
nltk.download('averaged_perceptron_tagger_eng')

text = "Artificial Intelligence is changing the way people work and learn."

print("BIDUR KHANAL")
print("\nOriginal Text:")
print(text)

tokens = word_tokenize(text)

print("\n1. Tokenization:")
print(tokens)

stop_words = set(stopwords.words('english'))

filtered_words = [
    word for word in tokens
    if word.isalpha() and word.lower() not in stop_words
]

print("\n2. Stop Word Removal:")
print(filtered_words)

stemmer = PorterStemmer()
stemmed_words = [stemmer.stem(word) for word in filtered_words]

print("\n3. Stemming:")
print(stemmed_words)

lemmatizer = WordNetLemmatizer()

lemmatized_words = [
    lemmatizer.lemmatize(word)
    for word in filtered_words
]

print("\n4. Lemmatization:")
print(lemmatized_words)

pos_tags = pos_tag(tokens)

print("\n5. Part-of-Speech Tagging:")
print(pos_tags)