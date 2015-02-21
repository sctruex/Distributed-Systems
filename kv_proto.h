#define OPERATION_OK 0
#define OPERATION_FAILED 1

#define DEL_OK 0
#define DEL_FAILED 1
#define DEL_KEY_IS_NULL 2
#define DEL_KEY_IS_TOO_LARGE 3
#define DEL_KEY_NOT_FOUND 4
#define DEL_KVSTORE_IS_EMPTY 5

#define DEL_VOTE_YES 0
#define DEL_VOTE_NO 1

#define GET_OK 0
#define GET_FAILED 1
#define GET_KEY_IS_NULL 2
#define GET_KEY_IS_TOO_LARGE 3
#define GET_KEY_NOT_FOUND 4
#define GET_KVSTORE_IS_EMPTY 5

#define PUT_OK 0
#define PUT_FAILED 1
#define PUT_KEY_IS_NULL 2
#define PUT_KEY_IS_TOO_LARGE 3
#define PUT_VALUE_IS_NULL 4
#define PUT_VALUE_IS_TOO_LARGE 5
#define PUT_KVPAIR_IS_NULL 6
#define PUT_DUPLICATE_KEY_VALUE_RESET 7
#define PUT_KVSTORE_OUT_OF_CAPACITY 8

#define PUT_VOTE_YES 0
#define PUT_VOTE_NO 1

#define KVSTORE_CAPACITY 256
#define MAX_LENGTH 32
