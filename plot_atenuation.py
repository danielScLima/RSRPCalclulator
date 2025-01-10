import matplotlib.pyplot as plt
import numpy as np

# Função para carregar o arquivo CSV
def load_data(filepath):
    angles = []
    attenuations = []
    with open(filepath, 'r') as file:
        for line in file:
            angle, attenuation = map(float, line.strip().split(';'))
            angles.append(angle)
            attenuations.append(attenuation)
    return np.array(angles), np.array(attenuations)

# Carregar os dados do arquivo
filepath = "742266V02_pionowa.csv"  # Substitua pelo caminho do seu arquivo
angles, attenuations = load_data(filepath)

# Converter ângulos para radianos (para gráfico polar)
angles_rad = np.radians(angles)

# Plotar em um gráfico polar
plt.figure(figsize=(8, 8))
ax = plt.subplot(111, polar=True)
ax.plot(angles_rad, attenuations, label="Padrão de Radiação")
ax.fill(angles_rad, attenuations, alpha=0.3)
ax.set_title("Padrão de Radiação da Antena", va='bottom')
ax.set_theta_zero_location("N")  # 0° no topo
ax.set_theta_direction(-1)       # Direção horária
ax.set_rlabel_position(90)       # Posições do rótulo radial
plt.legend(loc="upper right")
plt.show()

# Plotar em gráfico cartesiano
plt.figure(figsize=(10, 5))
plt.plot(angles, attenuations, label="Atenuação")
plt.xlabel("Ângulo (graus)")
plt.ylabel("Atenuação (dB)")
plt.title("Atenuação em Função do Ângulo")
plt.grid(True)
plt.legend()
plt.show()

