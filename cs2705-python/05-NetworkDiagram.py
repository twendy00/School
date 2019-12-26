import ipaddress
import time

#University Level - Weber State
ipInterface = ipaddress.ip_interface('138.191.0.0/16')
ipnetwork = ipInterface.network

college = list(ipaddress.ip_network(ipnetwork).subnets(prefixlen_diff = 4))

print('')
print('Weber State University')
print('-------------------------------')
print('')
print('Applied Science & Technology')
print('\t Network address and subnet mask is ', college[0])
print('\t Valid host address range: {0} - {1}'.format((((college[0])).network_address)+1,
   ((((college[0]).broadcast_address)-1))))
print('')
print('Arts & Humanities')
print('\t Network address and subnet mask is ', college[1])
print('\t Valid host address range: {0} - {1}'.format((((college[1])).network_address)+1,
   ((((college[1]).broadcast_address)-1))))
print('')
print('Education')
print('\t Network address and subnet mask is ', college[2])
print('\t Valid host address range: {0} - {1}'.format((((college[2])).network_address)+1,
   ((((college[2]).broadcast_address)-1))))
print('')
print('Business & Economics')
print('\t Network address and subnet mask is ', college[3])
print('\t Valid host address range: {0} - {1}'.format((((college[3])).network_address)+1,
   ((((college[3]).broadcast_address)-1))))
print('')
print('Health')
print('\t Network address and subnet mask is ', college[4])
print('\t Valid host address range: {0} - {1}'.format((((college[4])).network_address)+1,
   ((((college[4]).broadcast_address)-1))))
print('')
print('Science')
print('\t Network address and subnet mask is ', college[5])
print('\t Valid host address range: {0} - {1}'.format((((college[5])).network_address)+1,
   ((((college[5]).broadcast_address)-1))))
print('')
print('Social & Behavioral Science')
print('\t Network address and subnet mask is ', college[6])
print('\t Valid host address range: {0} - {1}'.format((((college[6])).network_address)+1,
   ((((college[6]).broadcast_address)-1))))
print('')
print('Information Technology')
print('\t Network address and subnet mask is ', college[7])
print('\t Valid host address range: {0} - {1}'.format((((college[7])).network_address)+1,
   ((((college[7]).broadcast_address)-1))))
print('')
print('Student Affairs')
print('\t Network address and subnet mask is ', college[8])
print('\t Valid host address range: {0} - {1}'.format((((college[8])).network_address)+1,
   ((((college[8]).broadcast_address)-1))))
print('')
print('Facilities Management')
print('\t Network address and subnet mask is ', college[9])
print('\t Valid host address range: {0} - {1}'.format((((college[9])).network_address)+1,
   ((((college[9]).broadcast_address)-1))))
print('')
print('Administrative Services')
print('\t Network address and subnet mask is ', college[10])
print('\t Valid host address range: {0} - {1}'.format((((college[10])).network_address)+1,
   ((((college[10]).broadcast_address)-1))))
print('')

time.sleep(2)


#College 1 - Applied Science
ipInterface = ipaddress.ip_interface(college[0])
ipnetwork = ipInterface.network
applied = list(ipaddress.ip_network(ipnetwork).subnets(prefixlen_diff = 3))

print('')
print('Applied Science')
print('-------------------------------')
print('')
print('Computer Science')
print('\t Network address and subnet mask is ', applied[0])
print('\t Valid host address range: {0} - {1}'.format((((applied[0])).network_address)+1,
   ((((applied[0]).broadcast_address)-1))))
print('')
print('Professional Sales')
print('\t Network address and subnet mask is ', applied[1])
print('\t Valid host address range: {0} - {1}'.format((((applied[1])).network_address)+1,
   ((((applied[1]).broadcast_address)-1))))
print('')
print('Manufacturing Engineering')
print('\t Network address and subnet mask is ', applied[2])
print('\t Valid host address range: {0} - {1}'.format((((applied[2])).network_address)+1,
   ((((applied[2]).broadcast_address)-1))))
print('')
print('Construction Management')
print('\t Network address and subnet mask is ', applied[3])
print('\t Valid host address range: {0} - {1}'.format((((applied[3])).network_address)+1,
   ((((applied[3]).broadcast_address)-1))))
print('')
print('Automotive Technology')
print('\t Network address and subnet mask is ', applied[4])
print('\t Valid host address range: {0} - {1}'.format((((applied[4])).network_address)+1,
   ((((applied[4]).broadcast_address)-1))))
print('')
print('Network Technology')
print('\t Network address and subnet mask is ', applied[5])
print('\t Valid host address range: {0} - {1}'.format((((applied[5])).network_address)+1,
   ((((applied[5]).broadcast_address)-1))))
print('')
print('Web Design')
print('\t Network address and subnet mask is ', applied[6])
print('\t Valid host address range: {0} - {1}'.format((((applied[6])).network_address)+1,
   ((((applied[6]).broadcast_address)-1))))
print('')
print('Engineering')
print('\t Network address and subnet mask is ', applied[7])
print('\t Valid host address range: {0} - {1}'.format((((applied[7])).network_address)+1,
   ((((applied[7]).broadcast_address)-1))))
print('')

time.sleep(2)


#College 2 - Arts & Humanities
ipInterface = ipaddress.ip_interface(college[1])
ipnetwork = ipInterface.network
applied = list(ipaddress.ip_network(ipnetwork).subnets(prefixlen_diff = 3))

print('')
print('Arts & Humanities')
print('-------------------------------')
print('')
print('Korean')
print('\t Network address and subnet mask is ', applied[0])
print('\t Valid host address range: {0} - {1}'.format((((applied[0])).network_address)+1,
   ((((applied[0]).broadcast_address)-1))))
print('')
print('German')
print('\t Network address and subnet mask is ', applied[1])
print('\t Valid host address range: {0} - {1}'.format((((applied[1])).network_address)+1,
   ((((applied[1]).broadcast_address)-1))))
print('')
print('Spanish')
print('\t Network address and subnet mask is ', applied[2])
print('\t Valid host address range: {0} - {1}'.format((((applied[2])).network_address)+1,
   ((((applied[2]).broadcast_address)-1))))
print('')
print('French')
print('\t Network address and subnet mask is ', applied[3])
print('\t Valid host address range: {0} - {1}'.format((((applied[3])).network_address)+1,
   ((((applied[3]).broadcast_address)-1))))
print('')
print('English')
print('\t Network address and subnet mask is ', applied[4])
print('\t Valid host address range: {0} - {1}'.format((((applied[4])).network_address)+1,
   ((((applied[4]).broadcast_address)-1))))
print('')
print('Visual Arts')
print('\t Network address and subnet mask is ', applied[5])
print('\t Valid host address range: {0} - {1}'.format((((applied[5])).network_address)+1,
   ((((applied[5]).broadcast_address)-1))))
print('')
print('Performing Arts')
print('\t Network address and subnet mask is ', applied[6])
print('\t Valid host address range: {0} - {1}'.format((((applied[6])).network_address)+1,
   ((((applied[6]).broadcast_address)-1))))
print('')
print('Communications')
print('\t Network address and subnet mask is ', applied[7])
print('\t Valid host address range: {0} - {1}'.format((((applied[7])).network_address)+1,
   ((((applied[7]).broadcast_address)-1))))
print('')

time.sleep(2)


#College 3 - Education
ipInterface = ipaddress.ip_interface(college[2])
ipnetwork = ipInterface.network
applied = list(ipaddress.ip_network(ipnetwork).subnets(prefixlen_diff = 3))

print('')
print('Education')
print('-------------------------------')
print('')
print('Child & Family Studies')
print('\t Network address and subnet mask is ', applied[0])
print('\t Valid host address range: {0} - {1}'.format((((applied[0])).network_address)+1,
   ((((applied[0]).broadcast_address)-1))))
print('')
print('Health Promotion')
print('\t Network address and subnet mask is ', applied[1])
print('\t Valid host address range: {0} - {1}'.format((((applied[1])).network_address)+1,
   ((((applied[1]).broadcast_address)-1))))
print('')
print('Athletic Training')
print('\t Network address and subnet mask is ', applied[2])
print('\t Valid host address range: {0} - {1}'.format((((applied[2])).network_address)+1,
   ((((applied[2]).broadcast_address)-1))))
print('')
print('Human Performance')
print('\t Network address and subnet mask is ', applied[3])
print('\t Valid host address range: {0} - {1}'.format((((applied[3])).network_address)+1,
   ((((applied[3]).broadcast_address)-1))))
print('')
print('Teacher Education')
print('\t Network address and subnet mask is ', applied[4])
print('\t Valid host address range: {0} - {1}'.format((((applied[4])).network_address)+1,
   ((((applied[4]).broadcast_address)-1))))
print('')
print('Exercise Physiology')
print('\t Network address and subnet mask is ', applied[5])
print('\t Valid host address range: {0} - {1}'.format((((applied[5])).network_address)+1,
   ((((applied[5]).broadcast_address)-1))))
print('')
print('Health Education')
print('\t Network address and subnet mask is ', applied[6])
print('\t Valid host address range: {0} - {1}'.format((((applied[6])).network_address)+1,
   ((((applied[6]).broadcast_address)-1))))
print('')
print('Recreation Management')
print('\t Network address and subnet mask is ', applied[7])
print('\t Valid host address range: {0} - {1}'.format((((applied[7])).network_address)+1,
   ((((applied[7]).broadcast_address)-1))))
print('')

time.sleep(2)


#College 4 - Business & Economics
ipInterface = ipaddress.ip_interface(college[3])
ipnetwork = ipInterface.network
applied = list(ipaddress.ip_network(ipnetwork).subnets(prefixlen_diff = 3))

print('')
print('Business & Economics')
print('-------------------------------')
print('')
print('Business Administration')
print('\t Network address and subnet mask is ', applied[0])
print('\t Valid host address range: {0} - {1}'.format((((applied[0])).network_address)+1,
   ((((applied[0]).broadcast_address)-1))))
print('')
print('Economics')
print('\t Network address and subnet mask is ', applied[1])
print('\t Valid host address range: {0} - {1}'.format((((applied[1])).network_address)+1,
   ((((applied[1]).broadcast_address)-1))))
print('')
print('Information Systems Tech')
print('\t Network address and subnet mask is ', applied[2])
print('\t Valid host address range: {0} - {1}'.format((((applied[2])).network_address)+1,
   ((((applied[2]).broadcast_address)-1))))
print('')
print('Master of Business Admin')
print('\t Network address and subnet mask is ', applied[3])
print('\t Valid host address range: {0} - {1}'.format((((applied[3])).network_address)+1,
   ((((applied[3]).broadcast_address)-1))))
print('')
print('Accounting')
print('\t Network address and subnet mask is ', applied[4])
print('\t Valid host address range: {0} - {1}'.format((((applied[4])).network_address)+1,
   ((((applied[4]).broadcast_address)-1))))
print('')
print('Business Education')
print('\t Network address and subnet mask is ', applied[5])
print('\t Valid host address range: {0} - {1}'.format((((applied[5])).network_address)+1,
   ((((applied[5]).broadcast_address)-1))))
print('')
print('Master of Accountancy')
print('\t Network address and subnet mask is ', applied[6])
print('\t Valid host address range: {0} - {1}'.format((((applied[6])).network_address)+1,
   ((((applied[6]).broadcast_address)-1))))
print('')
print('Master of Taxation')
print('\t Network address and subnet mask is ', applied[7])
print('\t Valid host address range: {0} - {1}'.format((((applied[7])).network_address)+1,
   ((((applied[7]).broadcast_address)-1))))
print('')

time.sleep(2)


#College 5 - Health
ipInterface = ipaddress.ip_interface(college[4])
ipnetwork = ipInterface.network
applied = list(ipaddress.ip_network(ipnetwork).subnets(prefixlen_diff = 3))

print('')
print('Health')
print('-------------------------------')
print('')
print('Dental Hygiene')
print('\t Network address and subnet mask is ', applied[0])
print('\t Valid host address range: {0} - {1}'.format((((applied[0])).network_address)+1,
   ((((applied[0]).broadcast_address)-1))))
print('')
print('Emergency Care')
print('\t Network address and subnet mask is ', applied[1])
print('\t Valid host address range: {0} - {1}'.format((((applied[1])).network_address)+1,
   ((((applied[1]).broadcast_address)-1))))
print('')
print('Health Information Mgmt')
print('\t Network address and subnet mask is ', applied[2])
print('\t Valid host address range: {0} - {1}'.format((((applied[2])).network_address)+1,
   ((((applied[2]).broadcast_address)-1))))
print('')
print('Nursing')
print('\t Network address and subnet mask is ', applied[3])
print('\t Valid host address range: {0} - {1}'.format((((applied[3])).network_address)+1,
   ((((applied[3]).broadcast_address)-1))))
print('')
print('Medical Laboratory')
print('\t Network address and subnet mask is ', applied[4])
print('\t Valid host address range: {0} - {1}'.format((((applied[4])).network_address)+1,
   ((((applied[4]).broadcast_address)-1))))
print('')
print('Radiology')
print('\t Network address and subnet mask is ', applied[5])
print('\t Valid host address range: {0} - {1}'.format((((applied[5])).network_address)+1,
   ((((applied[5]).broadcast_address)-1))))
print('')
print('Respiratory Therapy')
print('\t Network address and subnet mask is ', applied[6])
print('\t Valid host address range: {0} - {1}'.format((((applied[6])).network_address)+1,
   ((((applied[6]).broadcast_address)-1))))
print('')
print('Occupational Therapy')
print('\t Network address and subnet mask is ', applied[7])
print('\t Valid host address range: {0} - {1}'.format((((applied[7])).network_address)+1,
   ((((applied[7]).broadcast_address)-1))))
print('')

time.sleep(2)


#College 6 - Science
ipInterface = ipaddress.ip_interface(college[5])
ipnetwork = ipInterface.network
applied = list(ipaddress.ip_network(ipnetwork).subnets(prefixlen_diff = 3))

print('')
print('Science')
print('-------------------------------')
print('')
print('Botany')
print('\t Network address and subnet mask is ', applied[0])
print('\t Valid host address range: {0} - {1}'.format((((applied[0])).network_address)+1,
   ((((applied[0]).broadcast_address)-1))))
print('')
print('Geosciences')
print('\t Network address and subnet mask is ', applied[1])
print('\t Valid host address range: {0} - {1}'.format((((applied[1])).network_address)+1,
   ((((applied[1]).broadcast_address)-1))))
print('')
print('Microbiology')
print('\t Network address and subnet mask is ', applied[2])
print('\t Valid host address range: {0} - {1}'.format((((applied[2])).network_address)+1,
   ((((applied[2]).broadcast_address)-1))))
print('')
print('Developmental Math')
print('\t Network address and subnet mask is ', applied[3])
print('\t Valid host address range: {0} - {1}'.format((((applied[3])).network_address)+1,
   ((((applied[3]).broadcast_address)-1))))
print('')
print('Physics')
print('\t Network address and subnet mask is ', applied[4])
print('\t Valid host address range: {0} - {1}'.format((((applied[4])).network_address)+1,
   ((((applied[4]).broadcast_address)-1))))
print('')
print('Zoology')
print('\t Network address and subnet mask is ', applied[5])
print('\t Valid host address range: {0} - {1}'.format((((applied[5])).network_address)+1,
   ((((applied[5]).broadcast_address)-1))))
print('')
print('Mathematics')
print('\t Network address and subnet mask is ', applied[6])
print('\t Valid host address range: {0} - {1}'.format((((applied[6])).network_address)+1,
   ((((applied[6]).broadcast_address)-1))))
print('')
print('Human Anatomy Physiology')
print('\t Network address and subnet mask is ', applied[7])
print('\t Valid host address range: {0} - {1}'.format((((applied[7])).network_address)+1,
   ((((applied[7]).broadcast_address)-1))))
print('')

time.sleep(2)


#College 7 - Social & Behavioral Science
ipInterface = ipaddress.ip_interface(college[6])
ipnetwork = ipInterface.network
applied = list(ipaddress.ip_network(ipnetwork).subnets(prefixlen_diff = 3))

print('')
print('Social & Behavioral Science')
print('-------------------------------')
print('')
print('Criminal Justice')
print('\t Network address and subnet mask is ', applied[0])
print('\t Valid host address range: {0} - {1}'.format((((applied[0])).network_address)+1,
   ((((applied[0]).broadcast_address)-1))))
print('')
print('Geography')
print('\t Network address and subnet mask is ', applied[1])
print('\t Valid host address range: {0} - {1}'.format((((applied[1])).network_address)+1,
   ((((applied[1]).broadcast_address)-1))))
print('')
print('History')
print('\t Network address and subnet mask is ', applied[2])
print('\t Valid host address range: {0} - {1}'.format((((applied[2])).network_address)+1,
   ((((applied[2]).broadcast_address)-1))))
print('')
print('Military Science')
print('\t Network address and subnet mask is ', applied[3])
print('\t Valid host address range: {0} - {1}'.format((((applied[3])).network_address)+1,
   ((((applied[3]).broadcast_address)-1))))
print('')
print('Philosophy & Poli Sci')
print('\t Network address and subnet mask is ', applied[4])
print('\t Valid host address range: {0} - {1}'.format((((applied[4])).network_address)+1,
   ((((applied[4]).broadcast_address)-1))))
print('')
print('Psychology')
print('\t Network address and subnet mask is ', applied[5])
print('\t Valid host address range: {0} - {1}'.format((((applied[5])).network_address)+1,
   ((((applied[5]).broadcast_address)-1))))
print('')
print('Social Work')
print('\t Network address and subnet mask is ', applied[6])
print('\t Valid host address range: {0} - {1}'.format((((applied[6])).network_address)+1,
   ((((applied[6]).broadcast_address)-1))))
print('')
print('Sociology & Anthropology')
print('\t Network address and subnet mask is ', applied[7])
print('\t Valid host address range: {0} - {1}'.format((((applied[7])).network_address)+1,
   ((((applied[7]).broadcast_address)-1))))
print('')

time.sleep(2)


#College 8 - Information Technology
ipInterface = ipaddress.ip_interface(college[7])
ipnetwork = ipInterface.network
applied = list(ipaddress.ip_network(ipnetwork).subnets(prefixlen_diff = 3))

print('')
print('Information Technology')
print('-------------------------------')
print('')
print('Computing Support')
print('\t Network address and subnet mask is ', applied[0])
print('\t Valid host address range: {0} - {1}'.format((((applied[0])).network_address)+1,
   ((((applied[0]).broadcast_address)-1))))
print('')
print('Telecommunications')
print('\t Network address and subnet mask is ', applied[1])
print('\t Valid host address range: {0} - {1}'.format((((applied[1])).network_address)+1,
   ((((applied[1]).broadcast_address)-1))))
print('')
print('Administrative Computing')
print('\t Network address and subnet mask is ', applied[2])
print('\t Valid host address range: {0} - {1}'.format((((applied[2])).network_address)+1,
   ((((applied[2]).broadcast_address)-1))))
print('')
print('Networking')
print('\t Network address and subnet mask is ', applied[3])
print('\t Valid host address range: {0} - {1}'.format((((applied[3])).network_address)+1,
   ((((applied[3]).broadcast_address)-1))))
print('')
print('Academic Computing')
print('\t Network address and subnet mask is ', applied[4])
print('\t Valid host address range: {0} - {1}'.format((((applied[4])).network_address)+1,
   ((((applied[4]).broadcast_address)-1))))
print('')
print('Computer Security')
print('\t Network address and subnet mask is ', applied[5])
print('\t Valid host address range: {0} - {1}'.format((((applied[5])).network_address)+1,
   ((((applied[5]).broadcast_address)-1))))
print('')
print('Database Administration')
print('\t Network address and subnet mask is ', applied[6])
print('\t Valid host address range: {0} - {1}'.format((((applied[6])).network_address)+1,
   ((((applied[6]).broadcast_address)-1))))
print('')
print('VP of IT Office')
print('\t Network address and subnet mask is ', applied[7])
print('\t Valid host address range: {0} - {1}'.format((((applied[7])).network_address)+1,
   ((((applied[7]).broadcast_address)-1))))
print('')

time.sleep(2)


#College 9 - Student Affairs
ipInterface = ipaddress.ip_interface(college[8])
ipnetwork = ipInterface.network
applied = list(ipaddress.ip_network(ipnetwork).subnets(prefixlen_diff = 3))

print('')
print('Student Affairs')
print('-------------------------------')
print('')
print('Student Life')
print('\t Network address and subnet mask is ', applied[0])
print('\t Valid host address range: {0} - {1}'.format((((applied[0])).network_address)+1,
   ((((applied[0]).broadcast_address)-1))))
print('')
print('Student Services')
print('\t Network address and subnet mask is ', applied[1])
print('\t Valid host address range: {0} - {1}'.format((((applied[1])).network_address)+1,
   ((((applied[1]).broadcast_address)-1))))
print('')
print('Outreach')
print('\t Network address and subnet mask is ', applied[2])
print('\t Valid host address range: {0} - {1}'.format((((applied[2])).network_address)+1,
   ((((applied[2]).broadcast_address)-1))))
print('')
print('Academic Support')
print('\t Network address and subnet mask is ', applied[3])
print('\t Valid host address range: {0} - {1}'.format((((applied[3])).network_address)+1,
   ((((applied[3]).broadcast_address)-1))))
print('')
print('Focused Interest')
print('\t Network address and subnet mask is ', applied[4])
print('\t Valid host address range: {0} - {1}'.format((((applied[4])).network_address)+1,
   ((((applied[4]).broadcast_address)-1))))
print('')
print('Career Services')
print('\t Network address and subnet mask is ', applied[5])
print('\t Valid host address range: {0} - {1}'.format((((applied[5])).network_address)+1,
   ((((applied[5]).broadcast_address)-1))))
print('')
print('Veterans Affairs')
print('\t Network address and subnet mask is ', applied[6])
print('\t Valid host address range: {0} - {1}'.format((((applied[6])).network_address)+1,
   ((((applied[6]).broadcast_address)-1))))
print('')
print('Diversity')
print('\t Network address and subnet mask is ', applied[7])
print('\t Valid host address range: {0} - {1}'.format((((applied[7])).network_address)+1,
   ((((applied[7]).broadcast_address)-1))))
print('')

time.sleep(2)


#College 10 - Facilities Management
ipInterface = ipaddress.ip_interface(college[9])
ipnetwork = ipInterface.network
applied = list(ipaddress.ip_network(ipnetwork).subnets(prefixlen_diff = 3))

print('')
print('Facilities Management')
print('-------------------------------')
print('')
print('Campus Planning')
print('\t Network address and subnet mask is ', applied[0])
print('\t Valid host address range: {0} - {1}'.format((((applied[0])).network_address)+1,
   ((((applied[0]).broadcast_address)-1))))
print('')
print('Construction')
print('\t Network address and subnet mask is ', applied[1])
print('\t Valid host address range: {0} - {1}'.format((((applied[1])).network_address)+1,
   ((((applied[1]).broadcast_address)-1))))
print('')
print('Custodial')
print('\t Network address and subnet mask is ', applied[2])
print('\t Valid host address range: {0} - {1}'.format((((applied[2])).network_address)+1,
   ((((applied[2]).broadcast_address)-1))))
print('')
print('Landscaping')
print('\t Network address and subnet mask is ', applied[3])
print('\t Valid host address range: {0} - {1}'.format((((applied[3])).network_address)+1,
   ((((applied[3]).broadcast_address)-1))))
print('')
print('Electrical')
print('\t Network address and subnet mask is ', applied[4])
print('\t Valid host address range: {0} - {1}'.format((((applied[4])).network_address)+1,
   ((((applied[4]).broadcast_address)-1))))
print('')
print('Mechanical')
print('\t Network address and subnet mask is ', applied[5])
print('\t Valid host address range: {0} - {1}'.format((((applied[5])).network_address)+1,
   ((((applied[5]).broadcast_address)-1))))
print('')
print('Business Services')
print('\t Network address and subnet mask is ', applied[6])
print('\t Valid host address range: {0} - {1}'.format((((applied[6])).network_address)+1,
   ((((applied[6]).broadcast_address)-1))))
print('')
print('Parking Services')
print('\t Network address and subnet mask is ', applied[7])
print('\t Valid host address range: {0} - {1}'.format((((applied[7])).network_address)+1,
   ((((applied[7]).broadcast_address)-1))))
print('')

time.sleep(2)


#College 11 - Administrative Services
ipInterface = ipaddress.ip_interface(college[10])
ipnetwork = ipInterface.network
applied = list(ipaddress.ip_network(ipnetwork).subnets(prefixlen_diff = 3))

print('')
print('Administrative Services')
print('-------------------------------')
print('')
print('Athletics')
print('\t Network address and subnet mask is ', applied[0])
print('\t Valid host address range: {0} - {1}'.format((((applied[0])).network_address)+1,
   ((((applied[0]).broadcast_address)-1))))
print('')
print('Accounting')
print('\t Network address and subnet mask is ', applied[1])
print('\t Valid host address range: {0} - {1}'.format((((applied[1])).network_address)+1,
   ((((applied[1]).broadcast_address)-1))))
print('')
print('Budget')
print('\t Network address and subnet mask is ', applied[2])
print('\t Valid host address range: {0} - {1}'.format((((applied[2])).network_address)+1,
   ((((applied[2]).broadcast_address)-1))))
print('')
print('Enviro Health & Safety')
print('\t Network address and subnet mask is ', applied[3])
print('\t Valid host address range: {0} - {1}'.format((((applied[3])).network_address)+1,
   ((((applied[3]).broadcast_address)-1))))
print('')
print('Printing')
print('\t Network address and subnet mask is ', applied[4])
print('\t Valid host address range: {0} - {1}'.format((((applied[4])).network_address)+1,
   ((((applied[4]).broadcast_address)-1))))
print('')
print('Human Resources')
print('\t Network address and subnet mask is ', applied[5])
print('\t Valid host address range: {0} - {1}'.format((((applied[5])).network_address)+1,
   ((((applied[5]).broadcast_address)-1))))
print('')
print('Purchasing')
print('\t Network address and subnet mask is ', applied[6])
print('\t Valid host address range: {0} - {1}'.format((((applied[6])).network_address)+1,
   ((((applied[6]).broadcast_address)-1))))
print('')
print('Police & Security')
print('\t Network address and subnet mask is ', applied[7])
print('\t Valid host address range: {0} - {1}'.format((((applied[7])).network_address)+1,
   ((((applied[7]).broadcast_address)-1))))
print('')

time.sleep(2)