#CS2705
#Creating Subnets
import ipaddress

print('1. What is the subnet mask value for the following subnet masks:')
#2 bit subnet mask -- 11000000.00000000.00000000.00000000
ipInterface = ipaddress.ip_interface('192.168.5.0/2')
print('a.2-bit mask: {}'.format((ipInterface).netmask))
# 13 bit subnet mask -- 11111111.11111000.00000000.00000000
ipInterface = ipaddress.ip_interface('192.168.5.0/13')
print('a.13-bit mask: {}'.format((ipInterface).netmask))

print('2. Use the IP address 10.10.10.10/24 and find the following items')
ipInterface = ipaddress.ip_interface('10.10.10.10/24')
ipNetwork = ipInterface.network
print('Network address: {}'.format((ipNetwork.network_address)))
print('Broadcast address: {}'.format((ipNetwork.broadcast_address)))
print('Number of host addresses: {}'.format(len(list((ipNetwork).hosts()))))
print('Valid host address range: {0} - {1}'.format((((ipNetwork).network_address)+1), (((ipNetwork).broadcast_address)-1)))

print('3. With this subnet mask 255.255.255.0 answer the following:')
ipInterface = ipaddress.ip_interface('10.10.10.10/255.255.255.0')
ipNetwork = ipInterface.network
print('# of bits used in the subnet mask: {}'.format((ipNetwork).prefixlen))
print('# of Hosts: {}'.format(len(list((ipNetwork).hosts()))))

print('4. You are the manager of a network with a Class C license. You need to create 7 subnets for your organization each with at least 30 computers in each subnet.')
#Class C has /24 mask. We have 256 addresses

ipInterface = ipaddress.ip_interface('10.10.10.10/24')
ipNetwork = ipInterface.network
print(ipNetwork)
bitsBorrowed = 3
ipSubnetLength = ipNetwork.prefixlen + bitsBorrowed
print('The subnet mask lenght is {}'.format(ipSubnetLength))
print('The 7 subnets needed are less than the {} subnets created'.format(len(list(ipaddress.ip_network(ipNetwork).subnets(prefixlen_diff = (bitsBorrowed))))))
ipSubnet = str('10.10.10.10/') + str(ipSubnetLength)
#print(ipSubnet)
ipSubnetAddress = ipaddress.ip_network(ipSubnet, strict = False)
#print(ipSubnetAddress)
print('The 30 computers needed are equal to or less than the {} host in each subnet'.format(len(list(ipaddress.ip_network(ipSubnetAddress).hosts()))))