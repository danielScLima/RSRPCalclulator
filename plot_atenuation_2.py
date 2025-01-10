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

# Função para plotar o gráfico polar
def plot_antenna_pattern(filepath, gain_antena_dbi=None):
    # Carregar os dados do arquivo
    angles, attenuations = load_data(filepath)
    
    # Converter ângulos para radianos
    angles_rad = np.radians(angles)
    
    # Verificar se o ganho da antena foi fornecido
    if gain_antena_dbi is not None:
        # Calcular o ganho efetivo
        values_to_plot = gain_antena_dbi - attenuations
        label = f"Ganho Efetivo (Ganho: {gain_antena_dbi} dBi)"
    else:
        # Usar atenuação diretamente
        values_to_plot = attenuations
        label = "Atenuação"
    
    # Plotar em gráfico polar
    plt.figure(figsize=(8, 8))
    ax = plt.subplot(111, polar=True)
    ax.plot(angles_rad, values_to_plot, label=label)
    ax.fill(angles_rad, values_to_plot, alpha=0.3)
    ax.set_title("Padrão de Radiação da Antena", va='bottom')
    ax.set_theta_zero_location("N")  # 0° no topo
    ax.set_theta_direction(-1)       # Direção horária
    ax.set_rlabel_position(90)       # Posições do rótulo radial
    plt.legend(loc="upper right")
    plt.show()
    
    # Plotar em gráfico cartesiano
    plt.figure(figsize=(10, 5))
    plt.plot(angles, values_to_plot, label=label)
    plt.xlabel("Ângulo (graus)")
    plt.ylabel("Valores (dB)")
    plt.title("Valores em Função do Ângulo")
    plt.grid(True)
    plt.legend()
    plt.show()

# Configurar o caminho do arquivo e o ganho da antena
filepath = "742266V02_pionowa.csv"  # Substitua pelo caminho do seu arquivo
#gain_antena_dbi = 15  # Coloque o valor do ganho da antena aqui, ou None para atenuação
gain_antena_dbi = None  # Coloque o valor do ganho da antena aqui, ou None para atenuação

# Chamar a função de plotagem
plot_antenna_pattern(filepath, gain_antena_dbi)
