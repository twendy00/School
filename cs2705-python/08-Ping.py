import subprocess

print("Begin Ping Processes")
print()
print("Ping www.microsoft.com")
subprocess.call(["ping", "-c 4", "www.microsoft.com"])

print()
print("Ping www.novell.com")
subprocess.call(["ping", "-c 4", "www.novell.com"])

print()
print("Ping www.yahoo.com")
subprocess.call(["ping", "-c 4", "www.yahoo.com"])

print()
print("Ping www.sun.com")
subprocess.call(["ping", "-c 4", "www.sun.com"])

print()
print("Ping www.microfocus.com")
subprocess.call(["ping", "-c 4", "www.microfocus.com"])