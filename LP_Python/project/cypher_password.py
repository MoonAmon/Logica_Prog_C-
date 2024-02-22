import hashlib
import getpass
from cryptography.fernet import Fernet


class PasswordManager:
    def __init__(self):
        self.password = {}
        self.key = Fernet.generate_key()

    def add_password(self, service, password):
        pass

    def get_password(self, service):
        pass

    def delete_password(self, service):
        pass

    def get_key(self):
        pass

    def generate_password(self, word):
        pass

