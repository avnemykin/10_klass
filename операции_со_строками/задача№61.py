s=input("Р’РІРµРґРёС‚Рµ РёРјСЏ:\n")
print (s)
s1=""
for z in s:
    if z=="Р°": z="Р±"
    elif z=="Р±": z="Р°"
    elif z=="Рђ": z="Р‘"
    elif z=="Р‘": z="Рђ"
    s1=s1+z
print (s1)
