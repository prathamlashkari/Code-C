import turtle
t = turtle.Turtle()
s = turtle.Screen()
s.bgcolor("black")
t.speed(50)
col = ['red', 'green', 'yellow', 'blue']
c = 0
for i in range(300):
    t.forward(i*5)
    t.right(550)
    t.color(col[c])
    if c == 3:
        c = 0
    else:
        c += 1
