import matplotlib.pyplot as plt

class Point:
    def __init__(self, x, y, color):
        self.x = x
        self.y = y
        self.color = color

def orientation(p1, p2, p3):
    vec = (p2.x - p1.x) * (p3.y - p1.y) - (p2.y - p1.y) * (p3.x - p1.x)
    return vec

def bsp(a, b, c, point):
    orientation1 = orientation(a, b, point)
    orientation2 = orientation(point, b, c)
    orientation3 = orientation(a, point, c)

    if orientation1 == 0 or orientation2 == 0 or orientation3 == 0:
        return False

    return (orientation1 > 0 and orientation2 > 0 and orientation3 > 0) or (orientation1 < 0 and orientation2 < 0 and orientation3 < 0)

def plot_triangle(a, b, c, points, output_file):
    plt.plot([a.x, b.x], [a.y, b.y], 'b-', label='Arête AB')  # Arête AB en bleu
    plt.plot([b.x, c.x], [b.y, c.y], 'b-', label='Arête BC')  # Arête BC en bleu
    plt.plot([c.x, a.x], [c.y, a.y], 'b-', label='Arête CA')  # Arête CA en bleu

    for point in points:
        plt.plot(point.x, point.y, 'o', color=point.color, label=f'Point {point.color.upper()}')  # Points avec des couleurs individuelles

    plt.xlabel('X')
    plt.ylabel('Y')
    plt.title('Visualisation des points et du triangle')
    plt.axis('equal')
    plt.grid(True)
    plt.legend()
    plt.savefig(output_file)  # Sauvegarde du graphique dans un fichier image
    plt.close()  # Fermeture de la figure pour libérer la mémoire

# Points du triangle
Ta = Point(0, 0, 'blue')
Tb = Point(5.12, 4.16, 'blue')
Tc = Point(1.18, -6.49, 'blue')

# Points à tester
P1 = Point(0, 0, 'red')
P2 = Point(4.18, 3.02, 'green')
P3 = Point(4.18, 3.02, 'purple')
P4 = Point(9.16, 10.12, 'orange')
P5 = Point(2.56, 2.08, 'cyan')
P6 = Point(1.5, 1.5, 'magenta')
P7 = Point(-0.5, -0.5, 'yellow')
P8 = Point(1.11, -1.44, 'gray')
P9 = Point(5.12, -4.16, 'peru')
P10 = Point(6.33, -2.76, 'black')

# Appel de la fonction bsp pour chaque point
result_P1 = bsp(Ta, Tb, Tc, P1)
result_P2 = bsp(Ta, Tb, Tc, P2)
result_P3 = bsp(Ta, Tb, Tc, P3)
result_P4 = bsp(Ta, Tb, Tc, P4)
result_P5 = bsp(Ta, Tb, Tc, P5)
result_P6 = bsp(Ta, Tb, Tc, P6)
result_P7 = bsp(Ta, Tb, Tc, P7)
result_P8 = bsp(Ta, Tb, Tc, P8)
result_P9 = bsp(Ta, Tb, Tc, P9)
result_P10 = bsp(Ta, Tb, Tc, P10)

# Liste des points pour la visualisation
points = [P1, P2, P3, P4, P5, P6, P7, P8, P9, P10]

# Visualisation du triangle et des points
plot_triangle(Ta, Tb, Tc, points, 'graphique.png')  # Spécifiez le nom du fichier image que vous souhaitez générer

