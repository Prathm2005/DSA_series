import tkinter as tk
from tkinter import messagebox
import random
import math
import matplotlib.pyplot as plt

cities = []

# ----------- Calculate Distance -----------
def distance(a, b):
    return math.sqrt((a[0]-b[0])**2 + (a[1]-b[1])**2)


# ----------- Generate Cities -----------
def generate_cities():
    global cities
    try:
        n = int(entry.get())
        if n < 3:
            raise ValueError
    except:
        messagebox.showerror("Error", "Enter a valid number (>=3)")
        return

    cities = [(random.randint(0, 100), random.randint(0, 100)) for _ in range(n)]
    messagebox.showinfo("Success", f"{n} cities generated!")


# ----------- Nearest Neighbor Heuristic -----------
def nearest_neighbor(start, cities):
    unvisited = cities.copy()
    path = []
    current = start

    while unvisited:
        next_city = min(unvisited, key=lambda city: distance(current, city))
        path.append(next_city)
        unvisited.remove(next_city)
        current = next_city

    return path


# ----------- Improve Path (2-opt Optimization) -----------
def two_opt(path):
    improved = True
    while improved:
        improved = False
        for i in range(1, len(path) - 2):
            for j in range(i + 1, len(path)):
                if j - i == 1:
                    continue
                if distance(path[i - 1], path[i]) + distance(path[j - 1], path[j]) > \
                   distance(path[i - 1], path[j - 1]) + distance(path[i], path[j]):
                    path[i:j] = reversed(path[i:j])
                    improved = True
    return path


# ----------- Solve TSP -----------
def solve_tsp():
    global cities
    if len(cities) == 0:
        messagebox.showerror("Error", "Generate cities first!")
        return

    start = cities[0]

    # Step 1: Get NN path
    path = nearest_neighbor(start, cities)

    # Step 2: Improve with 2-opt
    path = two_opt(path)

    # Step 3: Return to start
    path.append(start)

    # Calculate distance
    total_distance = sum(distance(path[i], path[i + 1]) for i in range(len(path) - 1))

    # Plot output like screenshot
    x = [p[0] for p in path]
    y = [p[1] for p in path]

    plt.figure(figsize=(8, 5))
    plt.title(f"TSP Solution - Total Distance: {total_distance:.2f}")
    plt.plot(x, y, marker="o", linestyle="-")
    plt.xlabel("X Coordinates")
    plt.ylabel("Y Coordinates")
    plt.show()


# ----------- GUI -----------
root = tk.Tk()
root.title("Traveling Salesman Problem Solver")
root.geometry("320x200")

label = tk.Label(root, text="Enter number of cities:", font=("Arial", 12))
label.pack(pady=5)

entry = tk.Entry(root, font=("Arial", 14), width=10)
entry.pack()

btn_gen = tk.Button(root, text="Generate Cities", font=("Arial", 12),
                    command=generate_cities)
btn_gen.pack(pady=5)

btn_solve = tk.Button(root, text="Solve TSP", font=("Arial", 12),
                      command=solve_tsp)
btn_solve.pack(pady=5)

root.mainloop()
