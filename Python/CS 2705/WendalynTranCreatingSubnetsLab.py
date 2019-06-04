import ipaddress

print('1. What is the subnet mask value for the following subnet masks:')
ipInterface = ipaddress.ip_interface('252.0.0.0/2')
print('1.2-bit mask: {}'.format((ipInterface).netmask))
ipInterface = ipaddress.ip_interface('252.0.0.0/13')
print('2.13-bit mask: {}'.format((ipInterface).netmask))
ipInterface = ipaddress.ip_interface('252.0.0.0/5')
print('3.5-bit mask: {}'.format((ipInterface).netmask))
ipInterface = ipaddress.ip_interface('252.0.0.0/11')
print('4.11-bit mask: {}'.format((ipInterface).netmask))
ipInterface = ipaddress.ip_interface('252.0.0.0/9')
print('5.9-bit mask: {}'.format((ipInterface).netmask))
ipInterface = ipaddress.ip_interface('252.0.0.0/10')
print('6.10-bit mask: {}'.format((ipInterface).netmask))
ipInterface = ipaddress.ip_interface('252.0.0.0/4')
print('7.4-bit mask: {}'.format((ipInterface).netmask))
ipInterface = ipaddress.ip_interface('252.0.0.0/14')
print('8.14-bit mask: {}'.format((ipInterface).netmask))
ipInterface = ipaddress.ip_interface('252.0.0.0/6')
print('9.6-bit mask: {}'.format((ipInterface).netmask))
ipInterface = ipaddress.ip_interface('252.0.0.0/8')
print('10.8-bit mask: {}'.format((ipInterface).netmask))
ipInterface = ipaddress.ip_interface('252.0.0.0/12')
print('11.12-bit mask: {}'.format((ipInterface).netmask))

print('2. Use the IP address 132.8.150.67/22 and find the following:')
ipInterface = ipaddress.ip_interface('132.8.150.67/22')
ipNetwork = ipInterface.network
print('Network address: {}'.format((ipNetwork.network_address)))
print('Broadcast address: {}'.format((ipNetwork.broadcast_address)))
print('Number of host addresses: {}'.format(len(list((ipNetwork).hosts()))))
print('Valid host address range: {0} - {1}'.format((((ipNetwork).network_address)+1), (((ipNetwork).broadcast_address)-1)))

print('3. Use the IP address 200.16.5.74/30 and find the following:')
ipInterface = ipaddress.ip_interface('200.16.5.74/30')
ipNetwork = ipInterface.network
print('Network address: {}'.format((ipNetwork.network_address)))
print('Broadcast address: {}'.format((ipNetwork.broadcast_address)))
print('Number of host addresses: {}'.format(len(list((ipNetwork).hosts()))))
print('Valid host address range: {0} - {1}'.format((((ipNetwork).network_address)+1), (((ipNetwork).broadcast_address)-1)))

print('4. Use the IP address 166.0.13.8 with subnet mask of 255.255.252.0 and find the following:')
ipInterface = ipaddress.ip_interface('166.0.13.8/255.255.252.0')
ipNetwork = ipInterface.network
print('Network address: {}'.format((ipNetwork.network_address)))
print('Broadcast address: {}'.format((ipNetwork.broadcast_address)))
print('Number of host addresses: {}'.format(len(list((ipNetwork).hosts()))))
print('Valid host address range: {0} - {1}'.format((((ipNetwork).network_address)+1), (((ipNetwork).broadcast_address)-1)))

print('5. With this subnet mask 255.255.240.0 answer the following:')
ipInterface = ipaddress.ip_interface('252.0.0.0/255.255.240.0')
ipNetwork = ipInterface.network
print('# of bits used in the subnet mask: {}'.format((ipNetwork).prefixlen))
print('# of Hosts: {}'.format(len(list((ipNetwork).hosts()))))

print('6. With this subnet mask 255.255.255.192 answer the following:')
ipInterface = ipaddress.ip_interface('252.0.0.0/255.255.255.192')
ipNetwork = ipInterface.network
print('# of bits used in the subnet mask: {}'.format((ipNetwork).prefixlen))
print('# of Hosts: {}'.format(len(list((ipNetwork).hosts()))))

print('7. With this subnet mask 255.255.252.0 answer the following:')
ipInterface = ipaddress.ip_interface('252.0.0.0/255.255.252.0')
ipNetwork = ipInterface.network
print('# of bits used in the subnet mask: {}'.format((ipNetwork).prefixlen))
print('# of Hosts: {}'.format(len(list((ipNetwork).hosts()))))

print('8. With this subnet mask 255.255.255.248 answer the following:')
ipInterface = ipaddress.ip_interface('252.0.0.0/255.255.255.248')
ipNetwork = ipInterface.network
print('# of bits used in the subnet mask: {}'.format((ipNetwork).prefixlen))
print('# of Hosts: {}'.format(len(list((ipNetwork).hosts()))))

print('9. You are a manager of a network that has 56 remote site and you have one Class B license. What subnet mask would you use with having the max amount of hosts at each site 1000?')
ipInterface = ipaddress.ip_interface('252.0.0.0/16')
ipNetwork = ipInterface.network
bitsBorrowed = 6
ipSubnetLength = ipNetwork.prefixlen + bitsBorrowed
print('The subnet mask length is {}'.format(ipSubnetLength))
print('The 56 subnets needed are less than the {} subnets created'.format(len(list(ipaddress.ip_network(ipNetwork).subnets(prefixlen_diff = (bitsBorrowed))))))
ipSubnet = str('252.0.0.0/') + str(ipSubnetLength)
#print(ipSubnet)
ipSubnetAddress = ipaddress.ip_network(ipSubnet, strict = False)
#print(ipSubnetAddress)
print('The 1000 computers needed are equal to or less than the {} host in each subnet'.format(len(list(ipaddress.ip_network(ipSubnetAddress).hosts()))))
ipInterface = ipaddress.ip_interface('252.0.0.0/22')
print('A 22-bit subnet mask would be {}'.format((ipInterface).netmask))