import os
import hashlib
from base64 import b64encode, b64decode


def hash_password(password, salt=None):
    if salt is None:
        salt = os.urandom(16)

    key = hashlib.pbkdf2_hmac('sha256', password.encode(), salt, 100000)

    return b64encode(key).decode('utf-8'), b64encode(salt).decode('utf-8')

def generate_password_from_key(key):
    return hashlib.sha256(key.encode()).hexdigest()

key, salt = hash_password('marcilene')

print(key, salt)
key2 = '85738336'
password = generate_password_from_key(key2)
print(password)

