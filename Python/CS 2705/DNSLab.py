import subprocess
import time

print()
print()
print("Begin DNS Search Processes")
print("__________________________")
print()



print("Run nslookup for weber.edu")
subprocess.call(["nslookup", "weber.edu"])

#Looks up weber.edu information using dig, which is similar to nslookup
print()
print("Run dig for weber.edu")
subprocess.call(["dig", "weber.edu"])

#Looks up various addresses for weber.edu (IPv6, mail addresses, etc.) using host
print()
print("Run host for weber.edu")
subprocess.call(["host", "weber.edu"])

#Take a brief pause before moving onto next section
time.sleep(3)

print()
print("MX server")
print("_________")
print()

print("Run nslookup for MX servers for weber.edu")
subprocess.call(["nslookup", "-query=mx", "weber.edu"])
print()
#+short shortens the results
print("Run dig for MX servers for weber.edu")
subprocess.call(["dig", "weber.edu", "MX", "+short"])
print()

print("Run host for MX servers for weber.edu")
subprocess.call(["host", "-t", "MX", "weber.edu"])
print()

time.sleep(3)

#Now looking at NS servers for weber.edu
print()
print("NS server")
print("_________")
print()

print("Run nslookup for NS servers for weber.edu")
subprocess.call(["nslookup", "-query=ns", "weber.edu"])
print()
#+short shortens the results
print("Run dig for NS servers for weber.edu")
subprocess.call(["dig", "weber.edu", "ns", "+short"])
print()

print("Run host for NS servers for weber.edu")
subprocess.call(["host", "-t", "ns", "weber.edu"])
print()

time.sleep(3)

#Change the DNS server
print()
print("Change the DNS server")
print("_________")
print()

print("Run nslookup using another DNS server for weber.edu")
subprocess.call(["nslookup", "weber.edu", "8.8.8.8"])
print()
#+short shortens the results
print("Run dig using another DNS server for weber.edu")
subprocess.call(["dig", "@8.8.8.8", "weber.edu"])
print()

print("Run host using another DNS server for weber.edu")
subprocess.call(["host", "weber.edu", "8.8.8.8"])
print()