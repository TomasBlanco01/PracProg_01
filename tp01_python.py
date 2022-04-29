class personas:
    def __init__(self):
        self.nombre = input("Nombre: ")
        self.asado = input("Comio asado?: ")
        self.achuras = input("Comio achuras?: ")
        self.pan = input("Comio pan?: ")
        self.vino = input("Tomo vino?: ")
        self.cerveza = input("Tomo cerveza?: ")
        self.postre = input("Comio postre?: ")
        self.ensalada = input("Comio ensalada?: ")
        self.total = 0    
class gastos:
    def __init__(self):
        self.p_asado = int (input("Gasto en asado: "))
        self.p_achuras = int (input("Gasto en achuras: "))
        self.p_pan = int (input("Gasto en pan: "))
        self.p_vino = int (input("Gasto en vino: "))
        self.p_cerveza = int (input("Gasto en cerveza: "))
        self.p_postre = int (input("Gasto en postre: "))
        self.p_ensalada = int (input("Gasto en ensalada: "))

#---------------------------------------------------------------------------------------------------------------------------------------------------------

cantidad_personas = int (input("Cantidad de personas: "))
list = []
i = 0

gasto = gastos() #pido precio del asado

while (i < cantidad_personas): #lleno la lista con las personas
    list.append(personas())
    i += 1
 
#---------------------------------------------------------------------------------------------------------------------------------------------------------
"""
def evaluar_pagos(list):
    f_asado = int
    f_achuras = int
    f_pan = int 
    f_vino = int 
    f_cerveza = int 
    f_postre = int
    f_ensalada = int #FLAGS

    for persona in list:
        if(persona.asado == "si"):
            f_asado = f_asado + 1
    
        if(persona.achuras == "si"):
            f_achuras = f_achuras + 1
    
        if(persona.pan == "si"):
            f_pan = f_pan + 1

        if(personas.vino == "si"):
            f_vino += 1

        if(personas.cerveza == "si"):
            f_cerveza += 1

        if(personas.postre == "si"):
            f_postre += 1

        if(personas.ensalada == "si"):
            f_ensalada += 1

evaluar_pagos(list)
"""
f_asado = 0
f_achuras = 0 
f_pan = 0
f_vino = 0 
f_cerveza = 0 
f_postre = 0
f_ensalada = 0 #flags

for persona in list:
    if(persona.asado == "si"):
        f_asado += 1

    if(persona.achuras == "si"):
        f_achuras += 1
    
    if(persona.pan == "si"):
        f_pan += 1

    if(persona.vino == "si"):
        f_vino += 1

    if(persona.cerveza == "si"):
        f_cerveza += 1

    if(persona.postre == "si"):
        f_postre += 1

    if(persona.ensalada == "si"):
        f_ensalada += 1

for persona in list:
    if(persona.asado == "si"):
            persona.total += (gasto.p_asado / f_asado)
    
    if(persona.achuras == "si"):
            persona.total += (gasto.p_achuras / f_achuras)

    if(persona.pan == "si"):
            persona.total += (gasto.p_pan / f_pan)

    if(persona.vino == "si"):
            persona.total += (gasto.p_vino / f_vino)
    
    if(persona.cerveza == "si"):
            persona.total += (gasto.p_cerveza / f_cerveza)

    if(persona.postre == "si"):
            persona.total += (gasto.p_postre / f_postre)

    if(persona.ensalada == "si"):
            persona.total += (gasto.p_ensalada / f_ensalada)

#---------------------------------------------------------------------------------------------------------------------------------------------------------

print("NOMBRE \t\t", "ASADO \t\t", "ACHURAS \t", "PAN \t\t", "VINO \t\t", "CERVEZA \t", "POSTRE \t", "ENSALADA \t", "TOTAL" )

for persona in list:
    print(persona.nombre, "\t\t", persona.asado, "\t\t", persona.achuras, "\t\t", persona.pan, "\t\t", persona.vino, "\t\t", persona.cerveza, "\t\t", persona.postre, "\t\t", persona.ensalada, "\t\t", persona.total) 