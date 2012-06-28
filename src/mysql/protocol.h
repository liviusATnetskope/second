#ifndef  _PROTOCOL_INC
#define  _PROTOCOL_INC

/*
 * we support only mysql 4.1 and later
 * ssl is not supported here
 */

int parse_handshake_init_cont(unsigned char *payload,
		size_t length, char *scramble);
int change_client_auth_content(unsigned char *payload, 
		int length, char *password, char *message);
void new_crypt(char *result, const char *password, char *message);
int is_last_data_packet(unsigned char *payload);
int change_client_second_auth_content(unsigned char *payload,
		size_t length, char *new_content);

#endif   /* ----- #ifndef _PROTOCOL_INC  ----- */

