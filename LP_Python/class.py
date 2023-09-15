class __init__:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def print_name(self):
        print("Name: " + self.name)

    def print_age(self):
        print("Age: " + str(self.age))

    def print_all(self):
        print("Name: " + self.name + ", Age: " + str(self.age))