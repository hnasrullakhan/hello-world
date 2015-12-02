
main()
{
	unsigned long long port_list = 0x1FFFFFF8;	
	unsigned long long port_list_temp = port_list;
	int first=0,first_port=0,last_port=0;
        while (port_list_temp >>= 1) {
                last_port++; 
		if(!first) first=++first_port;
        }
	printf(" last %d \n", last_port);
	printf(" first %d \n", first);
	return;
}

