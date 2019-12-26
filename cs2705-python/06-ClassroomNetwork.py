#classroom 1 -- 14 computers + 2 host & broadcast = 16 total
#classroom 2 -- 14 computers
#Small classroom 1 -- 6 computers
#Small classroom 2 -- 6 computers
#Small classroom 3 -- 6 computers
#Office 1 -  2 computers
#Office 2 - 2 computers

#192.168.5.0 \26 = 64 total addresses

import ipaddress
import time

ipInterface = ipaddress.ip_interface(192.168.5.0\26)
ipnetwork = ipInterface.network

classroom = list(ipaddress.ip_network(ipnetwork).subnets(prefixlen_diff = 2)