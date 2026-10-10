import win32api

input()
location = (win32api.GetCursorPos())
print(str(location))

#podivat se na to jak to funguje odkud bere ta vec informace