
class Classy(object):
    def __init__(self):
        self.items = []

    def addItem(self, name):
        self.items.append(name)

    def getClassiness(self):
        classiness = 0
        for item in self.items:
            if item == "tophat":
                classiness += 2
            if item == "bowtie":
                classiness += 4
            if item == "monocle":
                classiness += 5
            else:
                pass
        print(self.items)
        return classiness

# Test cases
me = Classy()

# Should be 0
print(me.getClassiness())

me.addItem("tophat")
# Should be 2
print(me.getClassiness())

me.addItem("bowtie")
me.addItem("jacket")
me.addItem("monocle")
# Should be 11
print(me.getClassiness())
me.addItem("bowtie")
# Should be 15
print(me.getClassiness())