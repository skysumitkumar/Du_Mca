from scapy.layers.l2 import ARP, Ether
from scapy.sendrecv import srp


def send_arp_request(src_ip, dest_ip):
    # Crafting ARP request
    arp_request = Ether(dst="ff:ff:ff:ff:ff:ff") / ARP(op="who-has", 
                                                       psrc=source_ip, pdst=target_ip)

    # Sending ARP request
    arp_response = srp(arp_request, timeout=2, verbose=False)[0]

    # Parsing ARP response
    if arp_response:
        for packet in arp_response:
            return packet[1][ARP].hwsrc  # Returning MAC address of target
    else:
        return None


# Example usage
source_ip = "10.25.8.60"  # IP address of the sender
target_ip = "10.25.4.17"  # IP address of the target

target_mac = send_arp_request(source_ip, target_ip)
if target_mac:
    print(f"MAC address of {target_ip}: {target_mac}")
else:
    print(f"No response received from {target_ip}")
