from scapy.layers.l2 import ARP, Ether
from scapy.sendrecv import srp
from prettytable import PrettyTable
#Here we install pip install prettytable

def send_arp_request(src_ip, dest_ip):
    # Crafting ARP request
    arp_request = Ether(dst="ff:ff:ff:ff:ff:ff") / ARP(op="who-has", 
                                                       psrc=source_ip, pdst=target_ip)

    # Sending ARP request
    arp_response = srp(arp_request, timeout=0.05, verbose=False)[0]

    # Parsing ARP response
    if arp_response:
        for packet in arp_response:
            return packet[1][ARP].hwsrc  # Returning MAC address of target
    else:
        return None

source_ip = "10.25.8.47"  # IP address of the sender

table = PrettyTable(['IP Address', 'MAC'])

for i in range(255):
    target_ip = "10.25.8."+str(i)
    target_mac = send_arp_request(source_ip, target_ip)
    if target_mac:
        table.add_row([target_ip, target_mac])
           
print(table)
        
