import pandas as pd
import matplotlib.pyplot as plt
import locale
import seaborn as sns


dfClientes = pd.read_excel('caso_estudo.xlsx', sheet_name='clientes')
dfLojas = pd.read_excel('caso_estudo.xlsx', sheet_name='lojas')
dfProdutos = pd.read_excel('caso_estudo.xlsx', sheet_name='produtos')
dfVendas = pd.read_excel('caso_estudo.xlsx', sheet_name='vendas')
dfPag = pd.read_excel('caso_estudo.xlsx', sheet_name='pagamentos')

dfProdutos ['Quantidade'] = 2 * dfProdutos['id']

print("\n\n")
#ordenar produtos por valor
print(dfProdutos.sort_values(by='valor',ascending=True))
print("\n\n")

dfVendas['valorInicial'] = dfProdutos['valor']

dfProdutos['quantidade'] = 2 * dfProdutos['id']
print("\n\n---------------------------PRODUTOS")
print(dfProdutos)
print("\n\n")
print(dfProdutos[dfProdutos.valor<50])
print("\n\n")
print("Existem ", dfClientes.nome[dfClientes.sexo=='F'].count(), " clientes do sexo feminino.")



# # Grafico BloxPot
# # Configurações dos gráficos
plt.rcParams['figure.figsize'] = (15, 10)
plt.rcParams['xtick.labelsize'] = 10
plt.rcParams['ytick.labelsize'] = 10
plt.rcParams['font.size'] = 15
plt.rcParams['axes.titlesize'] = 20

# # Identificando outliers nos valores de vendas
sns.boxplot(x=dfProdutos['valor'])
plt.show()

