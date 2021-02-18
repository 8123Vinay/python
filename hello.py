# Let me initiate a class and have a method inside the class;

class Toggle:
    def __init__(self,A,ans):
        self.ans=ans
        self.A=A
    def tog(self):
        for x in range(len(self.A)):
            if(((self.A)[x].isupper)==True):
                  self.ans+=((self.A)[x]).lower()
            else:
                self.ans+=((self.A)[x]).upper()
        return self.ans              

P1=Toggle("cool Bfasfsda sadf AFSJLAFS","")
print(P1.tog())
