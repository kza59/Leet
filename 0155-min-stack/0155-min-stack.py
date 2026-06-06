class MinStack:

    def __init__(self):
        self.q = []

    def push(self, value: int) -> None:
        minval = self.getMin()
        if minval is None or minval > value:
            minval = value
        self.q.append([value, minval])

    def pop(self) -> None:
        self.q.pop()

    def top(self) -> int:
        return self.q[-1][0] if self.q else None

    def getMin(self) -> int:
        # print("getMin")
        # print(self.q)
        return self.q[-1][1] if self.q else None


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(value)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()