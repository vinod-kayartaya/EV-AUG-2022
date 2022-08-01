# Network fundamentals

![](./images/mainframe.dio.png)

## What is a computer network?

-   Interconnection between two or more computers (and/or printers, other sharable devices)

## What are the components of a computer network?

-   Network Interface Card (NIC)
-   Hub
-   Switch
-   Modem
-   Router
-   Cables and connectors

## Network interface card (NIC)

![](./images/nic.dio.png)

-   It is a device that helps computer to connect and communicate with another device.
-   It contains a hardware address (MAC address)
-   There are two types
    -   Wired NIC (using RJ45 socket)
    -   Wireless NIC

## Hub

![](./images/hub.dio.png)

-   Used for splitting network connections into multiple devices
-   Receiver of requests by a PC
-   Distributes the request by one PC to all other inter connected computers

## Switch

![](./images/switch.dio.png)

-   A better version of hub, with provisions for more computers to be connected
-   It does not broadcast the message over the entire network, but it sends the message to the inteded receiver only.

## Modem / Router

![](./images/modem-router.dio.png)

-   Modem
    -   Modulator - Demodulator
    -   Connects our computer to the internet over the existing telephone line
    -   Connect the modem to the computer using a RJ45 cable
-   Router
    -   Connects a LAN (using WiFi) to the internet
    -   Uses (today) optic fibres or external network cables to connect to the internet
    -   Computers and other devices (cellphones, tablets, fridge, cleaning robot, CCTV etc) via WiFi

## Cables

![](./images/cables.dio.png)

-   Coaxial Cable
-   Twisted Pair Cable (used widely along with RJ45)
-   Fibre Otpic Cable (best performing, but very recent)

# Network Topologies

-   Defines the structure (or architecture) of the network
-   How all components of the network are inter connected with each other
-   Two types
    -   Physical
        -   Geometric representation of all the nodes
            -   Bus
            -   Ring
            -   Star
            -   Tree
            -   Mesh
            -   Hybrid
    -   Logical

## Bus Topology

![](./images/bus.dio.png)

-   All computers require NIC
-   No requirment of hub/switch/modem/router
-   Optionally may have server
-   One running cable that connects all nodes, is called the "backbone" cable
-   The cable that connects the node with the backbone cable is called the "drop" cable
-   The backbone and the drop cables are typically joined using a T-Connector
-   uses coaxial cable for the connecting nodes
-   Advantages
    -   low cost cable (since there is no need of hub/switch or expensive RJ45 plug/socket/crimping tool etc)
    -   Simple and easy to use
    -   Problem with a node or a drop cable does not impact other nodes or the network
-   Disadvantages:
    -   Extensive amount of cabling
    -   Since there is no server, applications may not be server over the network
    -   Damaged backbone cable may bring the network down
    -   No client/server applications
    -   Difficult to troubleshoot
    -   Signal interference cause disruption due to close proximity of cables
    -   Loss of signal due to the length of the cable (attenuation); use repeaters

## Ring Topology

![](./images/ring.dio.png)

-   Nothing but a bus-topology, where the two ends are connected again
-   Node that receives a message from the previous node will transmit the same to the next node
-   Data flows in one direction
-   No terminated ends

## Star Topology

![](./images/star.dio.png)

-   The most popular topology in the network implementation
-   It is an arrangement of nodes where each node is connected to a Hub or a Switch
-   Usually contains a server computer; can be used for monitering other nodes
-   Server also runs a Network Operating System, using which other computers may load OS or other software
-   Although coaxial cable was supported in the past, most networks use only twisted pair cable with RJ45 connectors
-   Advantages:
    -   Efficient troubleshooting (server comes with network software that can be used for this purpose)
    -   Limited scope for failure
    -   Cost effective
    -   High data transfer - upto and excess of 100Mbps

# Transmission modes

-   Is the way in which data is transmitted from one node to another node in the network
-   a.k.a. Communication mode
-   A transmission media (such as cable) provide a direction of communication
    -   the transmission mode is a directional mode

Based on the direction, transmission modes can be categorized into:

1. Simplex mode
1. Half duplex mode
1. Full duplex mode

![](./images/transmission-modes.dio.png)

# Computer network models

-   ISO brought out some standards as how a software can be developed that can utilize the hardware and perform network activities
-   Layered architecture
-   Divides the networking concepts into smaller pieces
-   Basic elements in any layered architecture consists of:
    -   Service: Set of actuibs that a layer provides to the higher layer
    -   Protocol: Defines a set of rules that a layer use to exchange information with the peer entity. Mainly concerned about the content and the order.
    -   Interface: Way in which message is transferred from one layer to another layer
-   OSI reference layer
    -   Open System Interconnection Reference Model
-   TCP/IP

# OSI

-   Defines the workflow of network activities using 7 layers
-   These layers are going to be part of some softwares including OS, Drivers, and Applications (like browsers or email clients)

![](./images/osi.dio.png)

# Assignment for Day-1

-   Write your understanding of the following:
    1. A brief history of computer networking
    1. Different components involved in a computer networking
    1. Different topologies
    1. Different layers of OSI model

Please write your answers in a plain paper, take pictures of the same using your smartphone, convert them into a PDF document (using Adobe Scan mobile app) and upload the same into the shared drive. There is a folder for submission of assignments (Networking -> Assignments -> Submissions). Name your file in the format EMPNO_FIRSTNAME_LASTNAME.pdf (eg. 9876_VINOD_KUMAR.pdf).

# References

1. https://www.inetdaemon.com/tutorials/networking/
1. https://networkencyclopedia.com/what-is-networking/
1. https://networkencyclopedia.com/history-of-networking/
1. https://networkencyclopedia.com/7-layers-osi-model/
1. https://www.youtube.com/watch?v=TNQsmPf24go
