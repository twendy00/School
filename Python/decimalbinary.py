#Wendalyn Tran
#Lab2: Convert IP Addresses
#CS 2705: Fundamentals of Networking


octet01 = 192
octet02 = 168
octet03 = 16
octet04 = 13

binOctet01 = bin(octet01)[2:].zfill(8)
binOctet02 = bin(octet02)[2:].zfill(8)
binOctet03 = bin(octet03)[2:].zfill(8)
binOctet04 = bin(octet04)[2:].zfill(8)
IPAddress=("The binary IP address is {0}.{1}.{2}.{3}")

print(IPAddress.format(binOctet01, binOctet02, binOctet03, binOctet04))

octet01='10101100'
octet02='10101111'
octet03='01110011'
octet04='00011000'
decOctet01=int(octet01, 2)
decOctet02=int(octet02, 2)
decOctet03=int(octet03, 2)
decOctet04=int(octet04, 2)
IPAddress = ("The decimal IP address is {0}.{1}.{2}.{3}")

print(IPAddress.format(decOctet01, decOctet02, decOctet03, decOctet04))
