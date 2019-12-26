import subprocess
import time


print()
#Uses NSLOOKUP, DIG, and HOST to find the IP address and domain name of weber.edu
print("#1.")
print("Run NSLOOKUP for weber.edu")
subprocess.call(["nslookup", "weber.edu"])
print()
print("Run DIG for weber.edu")
subprocess.call(["dig", "weber.edu"])
print()
print("Run HOST for weber.edu")
subprocess.call(["host", "weber.edu"])
print()

time.sleep(3)

print()
#Uses NSLOOKUP, DIG, and HOST to find the IP address and domain name of deseretnews.edu
print("#2.")
print("Run NSLOOKUP for deseretnews.com")
subprocess.call(["nslookup", "deseretnews.com"])
print()
print("Run DIG for deseretnews.com")
subprocess.call(["dig", "deseretnews.com"])
print()
print("Run HOST for deseretnews.com")
subprocess.call(["host", "deseretnews.com"])
print()

time.sleep(3)

#Uses NSLOOKUP, DIG, and HOST to find the mail exchange (MX) records for weber.edu and gmail.com
print()
print("#3.")
print("MX Server - weber.edu")
print("_________")
print()

print("Run NSLOOKUP for MX servers for weber.edu")
subprocess.call(["nslookup", "-query=mx", "weber.edu"])
print()
print("Run DIG for MX servers for weber.edu")
subprocess.call(["dig", "weber.edu", "MX", "+short"])
print()
print("Run HOST for MX servers for weber.edu")
subprocess.call(["host", "-t", "MX", "weber.edu"])
print()

time.sleep(3)

print()
print("MX Server - gmail.com")
print("_________")
print()

print("Run NSLOOKUP for MX servers for gmail.com")
subprocess.call(["nslookup", "-query=mx", "gmail.com"])
print()
print("Run DIG for MX servers for gmail.com")
subprocess.call(["dig", "gmail.com", "MX", "+short"])
print()
print("Run HOST for MX servers for gmail.com")
subprocess.call(["host", "-t", "MX", "gmail.com"])
print()

time.sleep(3)

#Uses NSLOOKUP, DIG, and HOST to find the name server (NS) types for yahoo.com and microsoft.com
print()
print("#4.")
print("NS Server - yahoo.com")
print("_________")
print()

print("Run NSLOOKUP for NS servers for yahoo.com")
subprocess.call(["nslookup", "-query=ns", "yahoo.com"])
print()
print("Run DIG for NS servers for yahoo.com")
subprocess.call(["dig", "yahoo.com", "ns", "+short"])
print()
print("Run HOST for NS servers for yahoo.com")
subprocess.call(["host", "-t", "ns", "yahoo.com"])
print()

time.sleep(3)

print()
print("NS Server - microsoft.com")
print("_________")
print()

print("Run NSLOOKUP for NS servers for microsoft.com")
subprocess.call(["nslookup", "-query=ns", "microsoft.com"])
print()
print("Run DIG for NS servers for microsoft.com")
subprocess.call(["dig", "microsoft.com", "ns", "+short"])
print()
print("Run HOST for NS servers for microsoft.com")
subprocess.call(["host", "-t", "ns", "microsoft.com"])
print()

time.sleep(3)

#Changes the server address to Google's name server.
#Uses NSLOOKUP, DIG, and HOST to find the addresses for novell.com and www.hp.com
print()
print("#5.")
print("Change the DNS Server - novell.com")
print("_________")
print()

print("Run NSLOOKUP using another DNS server for novell.com")
subprocess.call(["nslookup", "novell.com", "8.8.8.8"])
print()
print("Run DIG using another DNS server for novell.com")
subprocess.call(["dig", "@8.8.8.8", "novell.com"])
print()
print("Run HOST using another DNS server for novell.com")
subprocess.call(["host", "novell.com", "8.8.8.8"])
print()

print()
print("Change the DNS Server - www.hp.com")
print("_________")
print()

print("Run NSLOOKUP using another DNS server for www.hp.com")
subprocess.call(["nslookup", "www.hp.com", "8.8.8.8"])
print()
print("Run DIG using another DNS server for www.hp.com")
subprocess.call(["dig", "@8.8.8.8", "www.hp.com"])
print()
print("Run HOST using another DNS server for www.hp.com")
subprocess.call(["host", "www.hp.com", "8.8.8.8"])
print()