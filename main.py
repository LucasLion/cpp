import matplotlib.pyplot as plt
import pandas as pd

# Charger les données
df = pd.read_csv("/mnt/c/Users/noil/Desktop/donne moi aussi les donnees - donne moi aussi les donnees.csv")

# Créer un graphique
plt.plot(df["Année"], df["Température (°C)"])

# Ajouter une légende
plt.legend(["Température mondiale"])

# Titrer le graphique
plt.title("Évolution de la température mondiale depuis 20 ans")

# Afficher le graphique
plt.show()
