import turtle
t = turtle.Turtle()
s = turtle.Screen()
s.bgcolor("black")
t.speed(90)
t.right(45)
t.color('blue')
for i in range(150):
    t.circle(30)
    if 8 < i< 62:
         t.left(5)
    if 80 <i < 133:
       t.right(5)
    if i < 80 :
        t.forward(10)
    else:
        t.forward(5)

        
   