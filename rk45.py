import sympy as sp


def f(expressao, u, v):
    teste = expressao.subs({x: u, y:v})
    return teste



def rungeKutta(f, y0, x0, h, passos, expressao):

    valoresY = [y0]
    x = x0

    for i in range(passos):

        k1 = f(expressao, x, valoresY[-1])
        k2 = f(expressao, x + h/2, valoresY[-1] + (h*k1)/2)
        k3 = f(expressao, x + h/2, valoresY[-1] + (h*k2)/2)
        k4 = f(expressao, x + h, valoresY[-1] + h*k3)
        
        proxY = valoresY[-1] + (h/6)*(k1 + 2*k2 + 2*k3 + k4)
        x += h


        valoresY.append(proxY)
    return valoresY



def rkDormandPrince(f, y0, x0, h, passos, expressao):
    
    valoresY = [y0]
    x = x0

    for i in range(passos):

        k1 = h * f(expressao, x, valoresY[-1])
        k2 = h * f(expressao, x + h/5, valoresY[-1] + k1/5)
        k3 = h * f(expressao, x + 3*h/10, valoresY[-1] + 3*k1/40 + 9*k2/40)
        k4 = h * f(expressao, x + 4*h/5, valoresY[-1] + 44*k1/45 - 56*k2/15 + 32*k3/9)
        k5 = h * f(expressao, x + 8*h/9, valoresY[-1] + 19372*k1/6561 - 25360*k2/2187 + 64448*k3/6561 - 212*k4/729)
        k6 = h * f(expressao, x + h, valoresY[-1] + 9017*k1/3168 - 355*k2/33 + 46732*k3/5247 + 49*k4/176 - 5103*k5/18656)

        proxYrk4 = valoresY[-1] + 25*k1/216 + 1408*k3/2565 + 2197*k4/4104 - k5/5
        proxYrk5 = valoresY[-1] + 16*k1/135 + 6656*k3/12825 + 28561*k4/56430 - 9*k5/50 + 2*k6/55

        error = abs(proxYrk5 - proxYrk4)

        h *= 0.9 * (1.0 / (error + 1e-10))**0.2

        x += h
        valoresY.append(proxYrk5)

    return valoresY




x, y = sp.symbols('x y')
edo = input("Insira a EDO: ")
expressao = sp.sympify(edo)
# Pedir o valor inicial de x
x0 = float(input("X0: "))

# Pedir o valor inicial de y
y0 = float(input("Y0: "))

# Pedir o tamanho do passo (h)
h = float(input("h: "))

# Pedir o número de passos
passos = int(input("Numero de iterações: "))



# Resolvendo a EDO usando o método RK4
valoresRk4 = rungeKutta(f, y0, x0, h, passos, expressao)
valoresRk45 = rkDormandPrince(f, y0, x0, h, passos, expressao)

print(f"RESULTADO DORMAND PRINCE: {valoresRk45}")
print(f"RESULTADO RUNGE KUTTA RK4: {valoresRk4}")


