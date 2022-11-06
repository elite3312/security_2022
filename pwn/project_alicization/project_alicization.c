typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[20];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef struct less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>> less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>, *Pless<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>;

struct less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>> { // PlaceHolder Class Structure
};

typedef struct tuple<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&> tuple<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&>, *Ptuple<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&>;

struct tuple<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&> { // PlaceHolder Class Structure
};

typedef struct _Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>> _Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>, *P_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>;

struct _Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>> { // PlaceHolder Class Structure
};

typedef struct _Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>> _Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>, *P_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>;

struct _Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>> { // PlaceHolder Class Structure
};

typedef struct _Tuple_impl<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&> _Tuple_impl<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&>, *P_Tuple_impl<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&>;

struct _Tuple_impl<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&> { // PlaceHolder Class Structure
};

typedef struct _Head_base<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&,false> _Head_base<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&,false>, *P_Head_base<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&,false>;

struct _Head_base<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&,false> { // PlaceHolder Class Structure
};

typedef struct _Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>> _Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>, *P_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>;

struct _Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>> { // PlaceHolder Class Structure
};

typedef struct tuple<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&> tuple<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&>, *Ptuple<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&>;

struct tuple<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&> { // PlaceHolder Class Structure
};

typedef struct _Tuple_impl<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&> _Tuple_impl<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&>, *P_Tuple_impl<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&>;

struct _Tuple_impl<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&> { // PlaceHolder Class Structure
};

typedef struct _Head_base<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&,false> _Head_base<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&,false>, *P_Head_base<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&,false>;

struct _Head_base<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&,false> { // PlaceHolder Class Structure
};

typedef struct pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>, *Ppair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>;

struct pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> { // PlaceHolder Class Structure
};

typedef struct _Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>> _Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>, *P_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>;

struct _Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>> { // PlaceHolder Class Structure
};

typedef long __ssize_t;

typedef __ssize_t ssize_t;

typedef long __time_t;

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef __time_t time_t;

typedef struct Account Account, *PAccount;

struct Account { // PlaceHolder Structure
};

typedef struct _Rb_tree_iterator _Rb_tree_iterator, *P_Rb_tree_iterator;

struct _Rb_tree_iterator { // PlaceHolder Structure
};

typedef struct pair pair, *Ppair;

struct pair { // PlaceHolder Structure
};

typedef struct tuple tuple, *Ptuple;

struct tuple { // PlaceHolder Structure
};

typedef struct _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>> _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>, *P_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>;

struct _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>> { // PlaceHolder Structure
};

typedef struct pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()> pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>, *Ppair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>;

struct pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()> { // PlaceHolder Structure
};

typedef struct basic_istream basic_istream, *Pbasic_istream;

struct basic_istream { // PlaceHolder Structure
};

typedef struct _Rb_tree_node _Rb_tree_node, *P_Rb_tree_node;

struct _Rb_tree_node { // PlaceHolder Structure
};

typedef struct _Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>> _Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>, *P_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>;

struct _Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>> { // PlaceHolder Structure
};

typedef struct piecewise_construct_t piecewise_construct_t, *Ppiecewise_construct_t;

struct piecewise_construct_t { // PlaceHolder Structure
};

typedef dword random_access_iterator_tag;

typedef struct allocator<char> allocator<char>, *Pallocator<char>;

struct allocator<char> { // PlaceHolder Structure
};

typedef struct _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>> _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>, *P_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>;

struct _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>> { // PlaceHolder Structure
};

typedef struct _Head_base _Head_base, *P_Head_base;

struct _Head_base { // PlaceHolder Structure
};

typedef struct map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,void(*)(),std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>> map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,void(*)(),std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>, *Pmap<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,void(*)(),std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>;

struct map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,void(*)(),std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>> { // PlaceHolder Structure
};

typedef struct allocator allocator, *Pallocator;

struct allocator { // PlaceHolder Structure
};

typedef struct _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>> _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>, *P_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>;

struct _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>> { // PlaceHolder Structure
};

typedef struct _Tuple_impl _Tuple_impl, *P_Tuple_impl;

struct _Tuple_impl { // PlaceHolder Structure
};

typedef dword _Index_tuple;

typedef struct basic_ostream basic_ostream, *Pbasic_ostream;

struct basic_ostream { // PlaceHolder Structure
};

typedef struct allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>> allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>, *Pallocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>;

struct allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>> { // PlaceHolder Structure
};

typedef struct _Rb_tree_header _Rb_tree_header, *P_Rb_tree_header;

struct _Rb_tree_header { // PlaceHolder Structure
};

typedef struct _Rb_tree_node_base _Rb_tree_node_base, *P_Rb_tree_node_base;

struct _Rb_tree_node_base { // PlaceHolder Structure
};

typedef dword _Rb_tree_const_iterator;

typedef struct allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>> allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>, *Pallocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>;

struct allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>> { // PlaceHolder Structure
};

typedef struct map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,Account,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>> map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,Account,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>, *Pmap<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,Account,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>;

struct map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,Account,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>> { // PlaceHolder Structure
};

typedef struct _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>> _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>, *P_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>;

struct _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>> { // PlaceHolder Structure
};

typedef struct _Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>> _Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>, *P_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>;

struct _Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>> { // PlaceHolder Structure
};

typedef struct pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account> pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>, *Ppair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>;

struct pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account> { // PlaceHolder Structure
};

typedef struct basic_ostream<char,std::char_traits<char>> basic_ostream<char,std::char_traits<char>>, *Pbasic_ostream<char,std::char_traits<char>>;

struct basic_ostream<char,std::char_traits<char>> { // PlaceHolder Structure
};

typedef dword iterator_category;

typedef struct type type, *Ptype;

struct type { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/std/enable_if<std::__and_<std::__not_<std::__is_tuple_like<char>>,std::is_move_constructible<char>,std::is_move_assignable<char>>::value,void>/type - /Demangler/std/remove_reference<char&>/type

typedef struct _Rb_tree_impl<std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,true> _Rb_tree_impl<std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,true>, *P_Rb_tree_impl<std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,true>;

struct _Rb_tree_impl<std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,true> { // PlaceHolder Structure
};

typedef dword basic_string;

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>> basic_string<char,std::char_traits<char>,std::allocator<char>>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>> { // PlaceHolder Structure
};

typedef struct Init Init, *PInit;

struct Init { // PlaceHolder Structure
};

typedef dword __normal_iterator;

typedef struct new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>> new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>, *Pnew_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>;

struct new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>> { // PlaceHolder Structure
};

typedef struct new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>> new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>, *Pnew_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>;

struct new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>> { // PlaceHolder Structure
};

typedef struct __normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>> __normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>, *P__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>;

struct __normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>> { // PlaceHolder Structure
};

typedef dword __type;

typedef struct __aligned_membuf<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>> __aligned_membuf<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>, *P__aligned_membuf<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>;

struct __aligned_membuf<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>> { // PlaceHolder Class Structure
};

typedef struct __aligned_membuf<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>> __aligned_membuf<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>, *P__aligned_membuf<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>;

struct __aligned_membuf<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>> { // PlaceHolder Class Structure
};

typedef enum Elf_ProgramHeaderType {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
} Elf_ProgramHeaderType;

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

typedef enum Elf64_DynTag {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf64_DynTag;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Gnu_BuildId Gnu_BuildId, *PGnu_BuildId;

struct Gnu_BuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Build-id vendor name
    byte description[20]; // Build-id value
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00102020(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
          (basic_string_char_std__char_traits_char__std__allocator_char__ *this)

{
  _basic_string(this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
  int iVar1;
  
  iVar1 = setvbuf(__stream,__buf,__modes,__n);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::compare
               (basic_string *param_1)

{
  compare(param_1);
  return;
}



void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::operator_
          (basic_string_char_std__char_traits_char__std__allocator_char__ *this,
          basic_string *param_1)

{
  operator_(this,param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::_Rb_tree_insert_and_rebalance
               (bool param_1,_Rb_tree_node_base *param_2,_Rb_tree_node_base *param_3,
               _Rb_tree_node_base *param_4)

{
  _Rb_tree_insert_and_rebalance(param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

basic_istream *
std::getline_char_std__char_traits_char__std__allocator_char__
          (basic_istream *param_1,basic_string *param_2)

{
  basic_istream *pbVar1;
  
  pbVar1 = getline_char_std__char_traits_char__std__allocator_char__(param_1,param_2);
  return pbVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int rand(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::__throw_bad_alloc(void)

{
  __throw_bad_alloc();
  return;
}



void __cxa_begin_catch(void)

{
  __cxa_begin_catch();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
               (basic_string *param_1)

{
  basic_string(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::end(void)

{
  end();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
               (basic_string *param_1)

{
  basic_string(param_1);
  return;
}



void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::operator__
          (basic_string_char_std__char_traits_char__std__allocator_char__ *this,char param_1)

{
  operator__(this,param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::_Rb_tree_increment(_Rb_tree_node_base *param_1)

{
  _Rb_tree_increment(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::size(void)

{
  size();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::begin(void)

{
  begin();
  return;
}



void __cxa_atexit(void)

{
  __cxa_atexit();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

basic_ostream * std::operator__(basic_ostream *param_1,basic_string *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = operator__(param_1,param_2);
  return pbVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = time(__timer);
  return tVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void srand(uint __seed)

{
  srand(__seed);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

basic_ostream * std::operator__(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = operator__(param_1,param_2);
  return pbVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::_Rb_tree_decrement(_Rb_tree_node_base *param_1)

{
  _Rb_tree_decrement(param_1);
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator__
          (basic_ostream_char_std__char_traits_char__ *this,FuncDef35 *param_1)

{
  operator__(this,param_1);
  return;
}



void __thiscall std::allocator<char>::_allocator(allocator_char_ *this)

{
  _allocator(this);
  return;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::operator_
          (basic_string_char_std__char_traits_char__std__allocator_char__ *this,
          basic_string *param_1)

{
  operator_(this,param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::data(void)

{
  data();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator__
          (basic_ostream_char_std__char_traits_char__ *this,uint param_1)

{
  operator__(this,param_1);
  return;
}



void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::operator_
          (basic_string_char_std__char_traits_char__std__allocator_char__ *this,char *param_1)

{
  operator_(this,param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
               (char *param_1,allocator *param_2)

{
  basic_string(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
               (void)

{
  basic_string();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = read(__fd,__buf,__nbytes);
  return sVar1;
}



void __cxa_rethrow(void)

{
  __cxa_rethrow();
  return;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  Init(this);
  return;
}



void __cxa_end_catch(void)

{
  __cxa_end_catch();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator__
          (basic_ostream_char_std__char_traits_char__ *this,int param_1)

{
  operator__(this,param_1);
  return;
}



void _Unwind_Resume(void)

{
                    // WARNING: Subroutine does not return
  _Unwind_Resume();
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::allocator<char>::allocator(void)

{
  allocator();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
  void *pvVar1;
  
  pvVar1 = mmap(__addr,__len,__prot,__flags,__fd,__offset);
  return pvVar1;
}



void _start(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_3,
                    auStack8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x001025d3)
// WARNING: Removing unreachable block (ram,0x001025df)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00102614)
// WARNING: Removing unreachable block (ram,0x00102620)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_8061 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  completed_8061 = 1;
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// Account::Account()

void __thiscall Account::Account(Account *this)

{
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string();
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string();
  *(undefined4 *)(this + 0x48) = 1000;
                    // try { // try from 001026c0 to 001026db has its CatchHandler @ 001026fc
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::operator_
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)this,"Guest");
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::operator_
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)(this + 0x20),"Guest"
            );
  *(undefined4 *)(this + 0x40) = 0;
  this[0x44] = (Account)0x0;
  *(undefined4 *)(this + 0x48) = 9999;
  return;
}



// Account::set_passwd(std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>)

void __thiscall Account::set_passwd(Account *this,basic_string param_1)

{
  undefined4 in_register_00000034;
  
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::operator_
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)(this + 0x20),
             (basic_string *)CONCAT44(in_register_00000034,param_1));
  return;
}



// Account::valid(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&,
// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&)

undefined __thiscall Account::valid(Account *this,basic_string *param_1,basic_string *param_2)

{
  undefined uVar1;
  __type _Var2;
  
  _Var2 = std::operator__((basic_string *)this,param_1);
  if (((char)_Var2 == '\0') ||
     (_Var2 = std::operator__((basic_string *)(this + 0x20),param_2), (char)_Var2 == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Account::system_call_status_window()

void __thiscall Account::system_call_status_window(Account *this)

{
  basic_ostream *pbVar1;
  basic_ostream_char_std__char_traits_char__ *pbVar2;
  
  pbVar1 = std::operator__((basic_ostream *)std::cout,"User name: ");
  pbVar1 = std::operator__(pbVar1,(basic_string *)this);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            ((basic_ostream_char_std__char_traits_char__ *)pbVar1,
             std::endl_char_std__char_traits_char__);
  pbVar1 = std::operator__((basic_ostream *)std::cout,"User id: ");
  pbVar2 = (basic_ostream_char_std__char_traits_char__ *)
           std::basic_ostream<char,std::char_traits<char>>::operator__
                     ((basic_ostream_char_std__char_traits_char__ *)pbVar1,*(int *)(this + 0x48));
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar2,std::endl_char_std__char_traits_char__);
  std::operator__((basic_ostream *)std::cout,"System Control Authority: ");
  if (this[0x44] == (Account)0x0) {
    pbVar1 = std::operator__((basic_ostream *)std::cout,"low");
    std::basic_ostream<char,std::char_traits<char>>::operator__
              ((basic_ostream_char_std__char_traits_char__ *)pbVar1,
               std::endl_char_std__char_traits_char__);
  }
  else {
    pbVar1 = std::operator__((basic_ostream *)std::cout,"high");
    std::basic_ostream<char,std::char_traits<char>>::operator__
              ((basic_ostream_char_std__char_traits_char__ *)pbVar1,
               std::endl_char_std__char_traits_char__);
  }
  std::operator__((basic_ostream *)std::cout,"Durability: ");
  if (*(int *)(this + 0x40) == -1) {
    pbVar1 = std::operator__((basic_ostream *)std::cout,&DAT_00109058);
    std::basic_ostream<char,std::char_traits<char>>::operator__
              ((basic_ostream_char_std__char_traits_char__ *)pbVar1,
               std::endl_char_std__char_traits_char__);
  }
  else {
    pbVar2 = (basic_ostream_char_std__char_traits_char__ *)
             std::basic_ostream<char,std::char_traits<char>>::operator__
                       ((basic_ostream_char_std__char_traits_char__ *)std::cout,
                        *(uint *)(this + 0x40));
    std::basic_ostream<char,std::char_traits<char>>::operator__
              (pbVar2,std::endl_char_std__char_traits_char__);
  }
  return;
}



// Account::is_admin()

Account __thiscall Account::is_admin(Account *this)

{
  return this[0x44];
}



// TEMPNAMEPLACEHOLDERVALUE(std::basic_ostream<char, std::char_traits<char>>&, char const*)

basic_ostream * operator__(basic_ostream *param_1,char *param_2)

{
  __normal_iterator _Var1;
  __normal_iterator _Var2;
  basic_ostream *pbVar3;
  long in_FS_OFFSET;
  allocator_char_ local_49;
  basic_string local_48 [10];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (normal_field == '\0') {
    std::allocator<char>::allocator();
                    // try { // try from 001029b1 to 001029b5 has its CatchHandler @ 00102a1e
    std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
              ((char *)local_48,(allocator *)param_2);
    std::allocator<char>::_allocator(&local_49);
    _Var1 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::end();
    _Var2 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::begin();
                    // try { // try from 001029e3 to 001029fa has its CatchHandler @ 00102a3c
    std::
    reverse___gnu_cxx____normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____
              (_Var2,_Var1);
    pbVar3 = std::operator__(param_1,local_48);
    std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
              ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_48);
  }
  else {
    pbVar3 = std::operator__(param_1,param_2);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return pbVar3;
}



// TEMPNAMEPLACEHOLDERVALUE(std::basic_ostream<char, std::char_traits<char>>&,
// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)

basic_ostream * operator__(basic_ostream *param_1,basic_string *param_2)

{
  __normal_iterator _Var1;
  __normal_iterator _Var2;
  basic_ostream *pbVar3;
  long in_FS_OFFSET;
  basic_string local_48 [10];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (normal_field == '\0') {
    std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
              (local_48);
    _Var1 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::end();
    _Var2 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::begin();
                    // try { // try from 00102ae1 to 00102af8 has its CatchHandler @ 00102b1c
    std::
    reverse___gnu_cxx____normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____
              (_Var2,_Var1);
    pbVar3 = std::operator__(param_1,local_48);
    std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
              ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_48);
  }
  else {
    pbVar3 = std::operator__(param_1,param_2);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return pbVar3;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// admin_password_gen[abi:cxx11]()

basic_string * admin_password_gen_abi_cxx11_(void)

{
  int iVar1;
  basic_string *in_RDI;
  int local_c;
  
  for (local_c = 0; local_c < 0x14; local_c = local_c + 1) {
    iVar1 = rand();
    std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::operator__
              ((basic_string_char_std__char_traits_char__std__allocator_char__ *)
               admin_passwd_abi_cxx11_,(char)iVar1 + (char)(iVar1 / 0x5d) * -0x5d + '!');
  }
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string(in_RDI)
  ;
  return in_RDI;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// init_account_map()

void init_account_map(void)

{
  Account *pAVar1;
  long in_FS_OFFSET;
  allocator_char_ local_99;
  basic_string local_98 [8];
  basic_string local_78 [22];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Account::Account((Account *)local_78,"Kirito","c8763!!!",999,false);
  std::allocator<char>::allocator();
                    // try { // try from 00102c2b to 00102c2f has its CatchHandler @ 00102ee8
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
            ((char *)local_98,(allocator *)"Kirito");
                    // try { // try from 00102c41 to 00102c45 has its CatchHandler @ 00102ed0
  pAVar1 = (Account *)
           std::
           map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,Account,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
           ::operator__((map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___Account_std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
                         *)accounts_abi_cxx11_,local_98);
  Account::operator_(pAVar1,(Account *)local_78);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_98);
  std::allocator<char>::_allocator(&local_99);
  Account::_Account((Account *)local_78);
  Account::Account((Account *)local_78,"Eugeo","i_love_alice",2,false);
  std::allocator<char>::allocator();
                    // try { // try from 00102cce to 00102cd2 has its CatchHandler @ 00102f2d
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
            ((char *)local_98,(allocator *)"Eugeo");
                    // try { // try from 00102ce4 to 00102ce8 has its CatchHandler @ 00102f15
  pAVar1 = (Account *)
           std::
           map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,Account,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
           ::operator__((map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___Account_std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
                         *)accounts_abi_cxx11_,local_98);
  Account::operator_(pAVar1,(Account *)local_78);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_98);
  std::allocator<char>::_allocator(&local_99);
  Account::_Account((Account *)local_78);
  Account::Account((Account *)local_78,"Quinella","",0xffffffff,true);
  std::allocator<char>::allocator();
                    // try { // try from 00102d71 to 00102d75 has its CatchHandler @ 00102f72
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
            ((char *)local_98,(allocator *)"Quinella");
                    // try { // try from 00102d87 to 00102d8b has its CatchHandler @ 00102f5a
  pAVar1 = (Account *)
           std::
           map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,Account,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
           ::operator__((map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___Account_std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
                         *)accounts_abi_cxx11_,local_98);
  Account::operator_(pAVar1,(Account *)local_78);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_98);
  std::allocator<char>::_allocator(&local_99);
  Account::_Account((Account *)local_78);
  std::allocator<char>::allocator();
                    // try { // try from 00102def to 00102df3 has its CatchHandler @ 00102fcc
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
            ((char *)local_98,(allocator *)"Quinella");
                    // try { // try from 00102e05 to 00102e1f has its CatchHandler @ 00102fb4
  pAVar1 = (Account *)
           std::
           map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,Account,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
           ::operator__((map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___Account_std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
                         *)accounts_abi_cxx11_,local_98);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
            (local_78);
                    // try { // try from 00102e2a to 00102e2e has its CatchHandler @ 00102f9f
  Account::set_passwd(pAVar1,(basic_string)local_78);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_78);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_98);
  std::allocator<char>::_allocator(&local_99);
  std::allocator<char>::allocator();
                    // try { // try from 00102e7d to 00102e81 has its CatchHandler @ 00103002
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
            ((char *)local_78,(allocator *)"Eugeo");
                    // try { // try from 00102e90 to 00102e94 has its CatchHandler @ 00102fed
  curr_accout = std::
                map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,Account,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
                ::operator__((map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___Account_std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
                              *)accounts_abi_cxx11_,local_78);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_78);
  std::allocator<char>::_allocator(&local_99);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// banner()

void banner(void)

{
  basic_ostream_char_std__char_traits_char__ *pbVar1;
  
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_00109090);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_001091d0);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_00109310);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_00109450);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_00109590);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_001096d0);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_00109810);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_00109950);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_00109a90);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_00109bd0);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_00109d10);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_00109e50);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_00109f90);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_0010a0d0);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_0010a210);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_0010a350);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_0010a490);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_0010a5d0);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_0010a710);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_0010a850);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_0010a990);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_0010aad0);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_0010ac10);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_0010ad50);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_0010ae90);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_0010afd0);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_0010b110);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_0010b250);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_0010b390);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,&DAT_0010b4d0);
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,"==========");
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,"Stay cool.");
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,"==========");
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// init_buf_show_banner()

void init_buf_show_banner(void)

{
  setvbuf(stdin,(char *)0x0,2,0);
  setvbuf(stdout,(char *)0x0,2,0);
  setvbuf(stderr,(char *)0x0,2,0);
  banner();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// init_cmd_funcs()

void init_cmd_funcs(void)

{
  code **ppcVar1;
  long in_FS_OFFSET;
  allocator_char_ local_49;
  basic_string local_48 [10];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator<char>::allocator();
                    // try { // try from 00103609 to 0010360d has its CatchHandler @ 001037d1
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
            ((char *)local_48,(allocator *)"System Call login");
                    // try { // try from 0010361c to 00103620 has its CatchHandler @ 001037bc
  ppcVar1 = (code **)std::
                     map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,void(*)(),std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
                     ::operator__((map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___void______std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
                                   *)cmd_funcs_abi_cxx11_,local_48);
  *ppcVar1 = system_call_login;
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_48);
  std::allocator<char>::_allocator(&local_49);
  std::allocator<char>::allocator();
                    // try { // try from 00103661 to 00103665 has its CatchHandler @ 00103804
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
            ((char *)local_48,(allocator *)"System Call status window");
                    // try { // try from 00103674 to 00103678 has its CatchHandler @ 001037ef
  ppcVar1 = (code **)std::
                     map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,void(*)(),std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
                     ::operator__((map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___void______std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
                                   *)cmd_funcs_abi_cxx11_,local_48);
  *ppcVar1 = system_call_status_window;
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_48);
  std::allocator<char>::_allocator(&local_49);
  std::allocator<char>::allocator();
                    // try { // try from 001036b9 to 001036bd has its CatchHandler @ 00103837
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
            ((char *)local_48,(allocator *)"System Call inspect entire command list");
                    // try { // try from 001036cc to 001036d0 has its CatchHandler @ 00103822
  ppcVar1 = (code **)std::
                     map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,void(*)(),std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
                     ::operator__((map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___void______std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
                                   *)cmd_funcs_abi_cxx11_,local_48);
  *ppcVar1 = system_call_inspect_cmd;
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_48);
  std::allocator<char>::_allocator(&local_49);
  std::allocator<char>::allocator();
                    // try { // try from 00103711 to 00103715 has its CatchHandler @ 0010386a
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
            ((char *)local_48,(allocator *)"System Call generate shellcode element");
                    // try { // try from 00103724 to 00103728 has its CatchHandler @ 00103855
  ppcVar1 = (code **)std::
                     map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,void(*)(),std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
                     ::operator__((map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___void______std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
                                   *)cmd_funcs_abi_cxx11_,local_48);
  *ppcVar1 = system_call_generate_shellcode_element;
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_48);
  std::allocator<char>::_allocator(&local_49);
  std::allocator<char>::allocator();
                    // try { // try from 00103769 to 0010376d has its CatchHandler @ 0010389d
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
            ((char *)local_48,(allocator *)"System Call change field attribution");
                    // try { // try from 0010377c to 00103780 has its CatchHandler @ 00103888
  ppcVar1 = (code **)std::
                     map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,void(*)(),std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
                     ::operator__((map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___void______std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
                                   *)cmd_funcs_abi_cxx11_,local_48);
  *ppcVar1 = system_call_change_field;
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_48);
  std::allocator<char>::_allocator(&local_49);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// init()

void init(void)

{
  time_t tVar1;
  long in_FS_OFFSET;
  basic_string_char_std__char_traits_char__std__allocator_char__ local_38 [40];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  admin_password_gen_abi_cxx11_();
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
            (local_38);
  init_buf_show_banner();
  init_account_map();
  init_cmd_funcs();
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// check_illegal_element(void*, unsigned long)

undefined8 check_illegal_element(void *param_1,ulong param_2)

{
  ulong local_28;
  byte *local_10;
  
  local_28 = param_2;
  local_10 = (byte *)param_1;
  while( true ) {
    if (local_28 == 0) {
      return 1;
    }
    if ((*local_10 < 0x20) || (0x7e < *local_10)) break;
    local_10 = local_10 + 1;
    local_28 = local_28 - 1;
  }
  return 0;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// system_call_inspect_cmd()

void system_call_inspect_cmd(void)

{
  basic_ostream_char_std__char_traits_char__ *pbVar1;
  
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,"System Call list:");
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,"System Call login");
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,"System Call status window");
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,"System Call inspect entire command list");
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,"System Call generate shellcode element");
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  pbVar1 = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,"System Call change field attribution");
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (pbVar1,std::endl_char_std__char_traits_char__);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// system_call_change_field()

void system_call_change_field(void)

{
  basic_ostream_char_std__char_traits_char__ *this;
  
  normal_field = normal_field ^ 1;
  this = (basic_ostream_char_std__char_traits_char__ *)
         operator__((basic_ostream *)std::cout,"Change Finish");
  std::basic_ostream<char,std::char_traits<char>>::operator__
            (this,std::endl_char_std__char_traits_char__);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// system_call_login()

void system_call_login(void)

{
  char cVar1;
  Account *this;
  basic_ostream *pbVar2;
  basic_string *pbVar3;
  basic_ostream_char_std__char_traits_char__ *pbVar4;
  long in_FS_OFFSET;
  basic_string local_68 [8];
  basic_string local_48 [10];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string();
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string();
                    // try { // try from 00103b0a to 00103c15 has its CatchHandler @ 00103c58
  operator__((basic_ostream *)std::cout,"Username: ");
  std::getline_char_std__char_traits_char__std__allocator_char__((basic_istream *)std::cin,local_68)
  ;
  operator__((basic_ostream *)std::cout,"Password: ");
  std::getline_char_std__char_traits_char__std__allocator_char__((basic_istream *)std::cin,local_48)
  ;
  this = (Account *)
         std::
         map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,Account,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
         ::operator__((map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___Account_std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
                       *)accounts_abi_cxx11_,local_68);
  cVar1 = Account::valid(this,local_68,local_48);
  if (cVar1 == '\0') {
    pbVar4 = (basic_ostream_char_std__char_traits_char__ *)
             operator__((basic_ostream *)std::cout,"Login failed!");
    std::basic_ostream<char,std::char_traits<char>>::operator__
              (pbVar4,std::endl_char_std__char_traits_char__);
  }
  else {
    pbVar2 = (basic_ostream *)operator__((basic_ostream *)std::cout,"You login with ");
    pbVar3 = (basic_string *)
             std::
             map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,Account,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
             ::operator__((map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___Account_std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
                           *)accounts_abi_cxx11_,local_68);
    pbVar2 = (basic_ostream *)operator__(pbVar2,pbVar3);
    pbVar4 = (basic_ostream_char_std__char_traits_char__ *)operator__(pbVar2,".");
    std::basic_ostream<char,std::char_traits<char>>::operator__
              (pbVar4,std::endl_char_std__char_traits_char__);
    curr_accout = std::
                  map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,Account,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
                  ::operator__((map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___Account_std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
                                *)accounts_abi_cxx11_,local_68);
  }
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_48);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_68);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// system_call_generate_shellcode_element()

void system_call_generate_shellcode_element(void)

{
  char cVar1;
  void *__s;
  code *__buf;
  basic_ostream_char_std__char_traits_char__ *pbVar2;
  basic_ostream *pbVar3;
  
  cVar1 = Account::is_admin((Account *)curr_accout);
  if (cVar1 == '\0') {
    pbVar3 = (basic_ostream *)operator__((basic_ostream *)std::cout,"You are ");
    pbVar3 = (basic_ostream *)operator__(pbVar3,curr_accout);
    pbVar2 = (basic_ostream_char_std__char_traits_char__ *)operator__(pbVar3,", not Quinella.");
    std::basic_ostream<char,std::char_traits<char>>::operator__
              (pbVar2,std::endl_char_std__char_traits_char__);
    pbVar2 = (basic_ostream_char_std__char_traits_char__ *)
             operator__((basic_ostream *)std::cout,"You need administrator permission.");
    std::basic_ostream<char,std::char_traits<char>>::operator__
              (pbVar2,std::endl_char_std__char_traits_char__);
  }
  else {
    __s = mmap((void *)0xc0000,0x10000,7,0x22,0,0);
    memset(__s,0x30,0x10000);
    __buf = (code *)((long)__s + 0x8763);
    operator__((basic_ostream *)std::cout,"Say your element content: ");
    read(0,__buf,0x789d);
    cVar1 = check_illegal_element(__buf,0x789d);
    if (cVar1 == '\0') {
      pbVar2 = (basic_ostream_char_std__char_traits_char__ *)
               operator__((basic_ostream *)std::cout,"System Call Fail!");
      std::basic_ostream<char,std::char_traits<char>>::operator__
                (pbVar2,std::endl_char_std__char_traits_char__);
    }
    else {
      (*__buf)();
    }
  }
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// system_call_status_window()

void system_call_status_window(void)

{
  Account::system_call_status_window(curr_accout);
  return;
}



void main(void)

{
  long *plVar1;
  code **ppcVar2;
  basic_ostream_char_std__char_traits_char__ *this;
  long in_FS_OFFSET;
  basic_string local_48 [10];
  undefined8 local_20;
  
  local_20 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  init();
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string();
  do {
    while( true ) {
                    // try { // try from 00103e42 to 00103ebb has its CatchHandler @ 00103ec1
      operator__((basic_ostream *)std::cout,": ");
      std::getline_char_std__char_traits_char__std__allocator_char__
                ((basic_istream *)std::cin,local_48);
      plVar1 = (long *)std::
                       map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,void(*)(),std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
                       ::operator__((map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___void______std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
                                     *)cmd_funcs_abi_cxx11_,local_48);
      if (*plVar1 == 0) break;
      ppcVar2 = (code **)std::
                         map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,void(*)(),std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
                         ::operator__((map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___void______std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
                                       *)cmd_funcs_abi_cxx11_,local_48);
      (**ppcVar2)();
    }
    this = (basic_ostream_char_std__char_traits_char__ *)
           operator__((basic_ostream *)std::cout,
                      "Try to say \'System Call inspect entire command list\'");
    std::basic_ostream<char,std::char_traits<char>>::operator__
              (this,std::endl_char_std__char_traits_char__);
  } while( true );
}



// __static_initialization_and_destruction_0(int, int)

void __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    std::ios_base::Init::Init((Init *)&std::__ioinit);
    __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
    std::
    map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,void(*)(),std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
    ::map((map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___void______std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
           *)cmd_funcs_abi_cxx11_);
    __cxa_atexit(std::
                 map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,void(*)(),std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
                 ::_map,cmd_funcs_abi_cxx11_,&__dso_handle);
    std::
    map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,Account,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
    ::map((map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___Account_std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
           *)accounts_abi_cxx11_);
    __cxa_atexit(std::
                 map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,Account,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
                 ::_map,accounts_abi_cxx11_,&__dso_handle);
    std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string();
    __cxa_atexit(std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                 _basic_string,admin_passwd_abi_cxx11_,&__dso_handle);
  }
  return;
}



// Account::Account()

void Account::_GLOBAL__sub_I_Account(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}



// operator new(unsigned long, void*)

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
}



// operator delete(void*, void*)

void operator_delete(void *param_1,void *param_2)

{
  return;
}



// std::char_traits<char>::compare(char const*, char const*, unsigned long)

int std::char_traits<char>::compare(char *param_1,char *param_2,ulong param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = memcmp(param_1,param_2,param_3);
  }
  return iVar1;
}



// std::_Rb_tree_header::_Rb_tree_header()

void __thiscall std::_Rb_tree_header::_Rb_tree_header(_Rb_tree_header *this)

{
  *(undefined4 *)this = 0;
  _M_reset(this);
  return;
}



// std::_Rb_tree_header::_M_reset()

void __thiscall std::_Rb_tree_header::_M_reset(_Rb_tree_header *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(_Rb_tree_header **)(this + 0x10) = this;
  *(_Rb_tree_header **)(this + 0x18) = this;
  *(undefined8 *)(this + 0x20) = 0;
  return;
}



// Account::Account(char const*, char const*, unsigned int, bool)

void __thiscall
Account::Account(Account *this,char *param_1,char *param_2,uint param_3,bool param_4)

{
  long in_FS_OFFSET;
  allocator_char_ local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator<char>::allocator();
                    // try { // try from 001040e5 to 001040e9 has its CatchHandler @ 0010415b
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
            ((char *)this,(allocator *)param_1);
  std::allocator<char>::_allocator(&local_21);
  std::allocator<char>::allocator();
                    // try { // try from 00104118 to 0010411c has its CatchHandler @ 00104179
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
            ((char *)(this + 0x20),(allocator *)param_2);
  std::allocator<char>::_allocator(&local_21);
  *(uint *)(this + 0x40) = param_3;
  this[0x44] = (Account)param_4;
  *(undefined4 *)(this + 0x48) = 1000;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void
// (*)()>>>::_Rb_tree_impl<std::less<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>>, true>::~_Rb_tree_impl()

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::
_Rb_tree_impl<std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,true>
::__Rb_tree_impl(_Rb_tree_impl_std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____true_
                 *this)

{
  allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
  ::_allocator((allocator_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
                *)this);
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::_Rb_tree()

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::_Rb_tree(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
           *this)

{
  _Rb_tree_impl<std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,true>
  ::_Rb_tree_impl((_Rb_tree_impl_std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____true_
                   *)this);
  return;
}



// std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, void
// (*)(), std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::map()

void __thiscall
std::
map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,void(*)(),std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::map(map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___void______std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
      *this)

{
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
  ::_Rb_tree((_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
              *)this);
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::_Rb_tree_impl<std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>, true>::~_Rb_tree_impl()

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::
_Rb_tree_impl<std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,true>
::__Rb_tree_impl(_Rb_tree_impl_std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____true_
                 *this)

{
  allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
  ::_allocator((allocator_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
                *)this);
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::_Rb_tree()

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::_Rb_tree(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
           *this)

{
  _Rb_tree_impl<std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,true>
  ::_Rb_tree_impl((_Rb_tree_impl_std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____true_
                   *)this);
  return;
}



// std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, Account,
// std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::map()

void __thiscall
std::
map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,Account,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::map(map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___Account_std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
      *this)

{
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
  ::_Rb_tree((_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
              *)this);
  return;
}



// Account::~Account()

void __thiscall Account::_Account(Account *this)

{
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)(this + 0x20));
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)this);
  return;
}



// Account::TEMPNAMEPLACEHOLDERVALUE(Account&&)

Account * __thiscall Account::operator_(Account *this,Account *param_1)

{
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::operator_
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)this,
             (basic_string *)param_1);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::operator_
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)(this + 0x20),
             (basic_string *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  this[0x44] = param_1[0x44];
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return this;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// __gnu_cxx::__enable_if<std::__is_char<char>::__value, bool>::__type
// std::TEMPNAMEPLACEHOLDERVALUE(std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const&)

__type std::operator__(basic_string *param_1,basic_string *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  
  lVar2 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::size();
  lVar3 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::size();
  if (lVar2 == lVar3) {
    uVar4 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::size();
    pcVar5 = (char *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                     data();
    pcVar6 = (char *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                     data();
    iVar1 = char_traits<char>::compare(pcVar6,pcVar5,uVar4);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void
// (*)()>>>::_Rb_tree_impl<std::less<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>>, true>::_Rb_tree_impl()

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::
_Rb_tree_impl<std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,true>
::_Rb_tree_impl(_Rb_tree_impl_std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____true_
                *this)

{
  allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
  ::allocator();
  _Rb_tree_key_compare<std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
  ::_Rb_tree_key_compare();
  _Rb_tree_header::_Rb_tree_header((_Rb_tree_header *)(this + 8));
  return;
}



// std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>>::~allocator()

void __thiscall
std::
allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::_allocator(allocator_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
             *this)

{
  __gnu_cxx::
  new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
  ::_new_allocator((new_allocator_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
                    *)this);
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::~_Rb_tree()

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::__Rb_tree(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
            *this)

{
  _Rb_tree_node *p_Var1;
  
  p_Var1 = (_Rb_tree_node *)_M_begin(this);
  _M_erase(this,p_Var1);
  _Rb_tree_impl<std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,true>
  ::__Rb_tree_impl((_Rb_tree_impl_std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____true_
                    *)this);
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::_Rb_tree_impl<std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>, true>::_Rb_tree_impl()

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::
_Rb_tree_impl<std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,true>
::_Rb_tree_impl(_Rb_tree_impl_std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____true_
                *this)

{
  allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
  ::allocator();
  _Rb_tree_key_compare<std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
  ::_Rb_tree_key_compare();
  _Rb_tree_header::_Rb_tree_header((_Rb_tree_header *)(this + 8));
  return;
}



// std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>>::~allocator()

void __thiscall
std::
allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::_allocator(allocator_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
             *this)

{
  __gnu_cxx::
  new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
  ::_new_allocator((new_allocator_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
                    *)this);
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::~_Rb_tree()

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::__Rb_tree(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
            *this)

{
  _Rb_tree_node *p_Var1;
  
  p_Var1 = (_Rb_tree_node *)_M_begin(this);
  _M_erase(this,p_Var1);
  _Rb_tree_impl<std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,true>
  ::__Rb_tree_impl((_Rb_tree_impl_std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____true_
                    *)this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::reverse<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>>(__gnu_cxx::__normal_iterator<char*,
// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>,
// __gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>>)

void std::
     reverse___gnu_cxx____normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____
               (__normal_iterator param_1,__normal_iterator param_2)

{
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined8 local_20 [2];
  long local_10;
  
  local_20[0] = CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __iterator_category___gnu_cxx____normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____
            ((__normal_iterator *)local_20);
  __reverse___gnu_cxx____normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____
            ((__normal_iterator)local_20[0],param_2,param_2);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, Account,
// std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::operator[](std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>&&)

long __thiscall
std::
map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,Account,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::operator__(map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___Account_std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
             *this,basic_string *param_1)

{
  bool bVar1;
  char cVar2;
  _Rb_tree_iterator _Var3;
  basic_string *pbVar4;
  undefined7 extraout_var;
  long lVar5;
  long in_FS_OFFSET;
  tuple local_39;
  undefined8 local_38;
  basic_string local_30 [2];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = lower_bound(this,param_1);
  local_28 = end(this);
  cVar2 = operator__((_Rb_tree_iterator *)&local_38,(_Rb_tree_iterator *)&local_28);
  if (cVar2 == '\0') {
    key_comp();
    pbVar4 = (basic_string *)
             _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
             ::operator_((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                          *)&local_38);
    cVar2 = less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>::
            operator__((less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                        *)local_30,param_1,pbVar4);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001045c8;
    }
  }
  bVar1 = true;
LAB_001045c8:
  if (bVar1) {
    move_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____(param_1);
    forward_as_tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
              (local_30);
    _Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
    ::_Rb_tree_const_iterator
              ((_Rb_tree_const_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                *)&local_28,(_Rb_tree_iterator *)&local_38);
    _Var3 = _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
            ::
            _M_emplace_hint_unique_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______std__tuple___
                      ((_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
                        *)this,(_Rb_tree_const_iterator)local_28,
                       (piecewise_construct_t *)&piecewise_construct,(tuple *)local_30,&local_39);
    local_38 = CONCAT71(extraout_var,_Var3);
  }
  lVar5 = _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
          ::operator_((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                       *)&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return lVar5 + 0x20;
}



// std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, void
// (*)(), std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::operator[](std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>&&)

long __thiscall
std::
map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,void(*)(),std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::operator__(map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___void______std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
             *this,basic_string *param_1)

{
  bool bVar1;
  char cVar2;
  _Rb_tree_iterator _Var3;
  basic_string *pbVar4;
  undefined7 extraout_var;
  long lVar5;
  long in_FS_OFFSET;
  tuple local_39;
  undefined8 local_38;
  basic_string local_30 [2];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = lower_bound(this,param_1);
  local_28 = end(this);
  cVar2 = operator__((_Rb_tree_iterator *)&local_38,(_Rb_tree_iterator *)&local_28);
  if (cVar2 == '\0') {
    key_comp();
    pbVar4 = (basic_string *)
             _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
             ::operator_((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                          *)&local_38);
    cVar2 = less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>::
            operator__((less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                        *)local_30,param_1,pbVar4);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001046f4;
    }
  }
  bVar1 = true;
LAB_001046f4:
  if (bVar1) {
    move_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____(param_1);
    forward_as_tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
              (local_30);
    _Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
    ::_Rb_tree_const_iterator
              ((_Rb_tree_const_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                *)&local_28,(_Rb_tree_iterator *)&local_38);
    _Var3 = _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
            ::
            _M_emplace_hint_unique_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______std__tuple___
                      ((_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
                        *)this,(_Rb_tree_const_iterator)local_28,
                       (piecewise_construct_t *)&piecewise_construct,(tuple *)local_30,&local_39);
    local_38 = CONCAT71(extraout_var,_Var3);
  }
  lVar5 = _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
          ::operator_((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                       *)&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return lVar5 + 0x20;
}



// std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, Account,
// std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::operator[](std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const&)

long __thiscall
std::
map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,Account,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::operator__(map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___Account_std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
             *this,basic_string *param_1)

{
  bool bVar1;
  char cVar2;
  _Rb_tree_iterator _Var3;
  basic_string *pbVar4;
  undefined7 extraout_var;
  long lVar5;
  long in_FS_OFFSET;
  tuple local_39;
  undefined8 local_38;
  less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___ local_30 [8];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = lower_bound(this,param_1);
  local_28 = end(this);
  cVar2 = operator__((_Rb_tree_iterator *)&local_38,(_Rb_tree_iterator *)&local_28);
  if (cVar2 == '\0') {
    key_comp();
    pbVar4 = (basic_string *)
             _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
             ::operator_((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                          *)&local_38);
    cVar2 = less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>::
            operator__(local_30,param_1,pbVar4);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00104820;
    }
  }
  bVar1 = true;
LAB_00104820:
  if (bVar1) {
    tuple<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&>::
    tuple_void_true_((tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__
                      *)local_30,param_1);
    _Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
    ::_Rb_tree_const_iterator
              ((_Rb_tree_const_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                *)&local_28,(_Rb_tree_iterator *)&local_38);
    _Var3 = _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
            ::
            _M_emplace_hint_unique_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___std__tuple___
                      ((_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
                        *)this,(_Rb_tree_const_iterator)local_28,
                       (piecewise_construct_t *)&piecewise_construct,(tuple *)local_30,&local_39);
    local_38 = CONCAT71(extraout_var,_Var3);
  }
  lVar5 = _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
          ::operator_((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                       *)&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return lVar5 + 0x20;
}



// std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, void
// (*)(), std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::operator[](std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const&)

long __thiscall
std::
map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,void(*)(),std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::operator__(map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___void______std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
             *this,basic_string *param_1)

{
  bool bVar1;
  char cVar2;
  _Rb_tree_iterator _Var3;
  basic_string *pbVar4;
  undefined7 extraout_var;
  long lVar5;
  long in_FS_OFFSET;
  tuple local_39;
  undefined8 local_38;
  less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___ local_30 [8];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = lower_bound(this,param_1);
  local_28 = end(this);
  cVar2 = operator__((_Rb_tree_iterator *)&local_38,(_Rb_tree_iterator *)&local_28);
  if (cVar2 == '\0') {
    key_comp();
    pbVar4 = (basic_string *)
             _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
             ::operator_((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                          *)&local_38);
    cVar2 = less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>::
            operator__(local_30,param_1,pbVar4);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00104942;
    }
  }
  bVar1 = true;
LAB_00104942:
  if (bVar1) {
    tuple<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&>::
    tuple_void_true_((tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__
                      *)local_30,param_1);
    _Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
    ::_Rb_tree_const_iterator
              ((_Rb_tree_const_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                *)&local_28,(_Rb_tree_iterator *)&local_38);
    _Var3 = _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
            ::
            _M_emplace_hint_unique_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___std__tuple___
                      ((_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
                        *)this,(_Rb_tree_const_iterator)local_28,
                       (piecewise_construct_t *)&piecewise_construct,(tuple *)local_30,&local_39);
    local_38 = CONCAT71(extraout_var,_Var3);
  }
  lVar5 = _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
          ::operator_((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                       *)&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return lVar5 + 0x20;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::remove_reference<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&>::type&& std::move<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>&>(std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>&)

type * std::move_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____
                 (basic_string *param_1)

{
  return (type *)param_1;
}



// std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>>::allocator()

void std::
     allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
     ::allocator(void)

{
  __gnu_cxx::
  new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
  ::new_allocator();
  return;
}



// std::_Rb_tree_key_compare<std::less<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>>>::_Rb_tree_key_compare()

void std::
     _Rb_tree_key_compare<std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
     ::_Rb_tree_key_compare(void)

{
  return;
}



// __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>>::~new_allocator()

void __thiscall
__gnu_cxx::
new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::_new_allocator(new_allocator_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
                 *this)

{
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void
// (*)()>>>::_M_erase(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>*)

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::_M_erase(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
           *this,_Rb_tree_node *param_1)

{
  _Rb_tree_node *p_Var1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node *local_28;
  
  local_28 = param_1;
  while (local_28 != (_Rb_tree_node *)0x0) {
    p_Var1 = (_Rb_tree_node *)_S_right((_Rb_tree_node_base *)local_28);
    _M_erase(this,p_Var1);
    p_Var2 = (_Rb_tree_node_base *)_S_left((_Rb_tree_node_base *)local_28);
    _M_drop_node(this,local_28);
    local_28 = (_Rb_tree_node *)p_Var2;
  }
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::_M_begin()

undefined8 __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::_M_begin(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
           *this)

{
  return *(undefined8 *)(this + 0x10);
}



// std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>>::allocator()

void std::
     allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
     ::allocator(void)

{
  __gnu_cxx::
  new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
  ::new_allocator();
  return;
}



// __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>>::~new_allocator()

void __thiscall
__gnu_cxx::
new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::_new_allocator(new_allocator_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
                 *this)

{
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const,
// Account>>>::_M_erase(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>*)

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::_M_erase(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
           *this,_Rb_tree_node *param_1)

{
  _Rb_tree_node *p_Var1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node *local_28;
  
  local_28 = param_1;
  while (local_28 != (_Rb_tree_node *)0x0) {
    p_Var1 = (_Rb_tree_node *)_S_right((_Rb_tree_node_base *)local_28);
    _M_erase(this,p_Var1);
    p_Var2 = (_Rb_tree_node_base *)_S_left((_Rb_tree_node_base *)local_28);
    _M_drop_node(this,local_28);
    local_28 = (_Rb_tree_node *)p_Var2;
  }
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::_M_begin()

undefined8 __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::_M_begin(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
           *this)

{
  return *(undefined8 *)(this + 0x10);
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::iterator_traits<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>>::iterator_category
// std::__iterator_category<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>>(__gnu_cxx::__normal_iterator<char*,
// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>> const&)

iterator_category
std::
__iterator_category___gnu_cxx____normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____
          (__normal_iterator *param_1)

{
  iterator_category in_EAX;
  
  return in_EAX;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::__reverse<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>>(__gnu_cxx::__normal_iterator<char*,
// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>,
// __gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>>, std::random_access_iterator_tag)

void std::
     __reverse___gnu_cxx____normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____
               (__normal_iterator param_1,__normal_iterator param_2,
               random_access_iterator_tag param_3)

{
  bool bVar1;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  local_18 = CONCAT44(in_register_00000034,param_2);
  bVar1 = __gnu_cxx::operator__((__normal_iterator *)&local_10,(__normal_iterator *)&local_18);
  if (!bVar1) {
    __gnu_cxx::
    __normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>
    ::operator__((__normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                  *)&local_18);
    while( true ) {
      bVar1 = __gnu_cxx::operator_((__normal_iterator *)&local_10,(__normal_iterator *)&local_18);
      if (!bVar1) break;
      iter_swap___gnu_cxx____normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______gnu_cxx____normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____
                ((__normal_iterator)local_10,(__normal_iterator)local_18);
      __gnu_cxx::
      __normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>
      ::operator__((__normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                    *)&local_10);
      __gnu_cxx::
      __normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>
      ::operator__((__normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                    *)&local_18);
    }
  }
  return;
}



// std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, Account,
// std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::lower_bound(std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const&)

void __thiscall
std::
map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,Account,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::lower_bound(map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___Account_std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
              *this,basic_string *param_1)

{
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
  ::lower_bound((_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
                 *)this,param_1);
  return;
}



// std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, Account,
// std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::end()

void __thiscall
std::
map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,Account,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::end(map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___Account_std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
      *this)

{
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
  ::end((_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
         *)this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::TEMPNAMEPLACEHOLDERVALUE(std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>> const&,
// std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>> const&)

ulong std::operator__(_Rb_tree_iterator *param_1,_Rb_tree_iterator *param_2)

{
  return *(ulong *)param_2 & 0xffffffffffffff00 | (ulong)(*(ulong *)param_1 == *(ulong *)param_2);
}



// std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, Account,
// std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::key_comp() const

undefined4
std::
map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,Account,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::key_comp(void)

{
  undefined4 unaff_EBX;
  
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
  ::key_comp();
  return unaff_EBX;
}



// std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>::TEMPNAMEPLACEHOLDERVALUE() const

void __thiscall
std::
_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
::operator_(_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
            *this)

{
  _Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
  ::_M_valptr(*(_Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                **)this);
  return;
}



// std::less<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>>::TEMPNAMEPLACEHOLDERVALUE(std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const&) const

void __thiscall
std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>::operator__
          (less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___ *this,
          basic_string *param_1,basic_string *param_2)

{
  operator_(param_1,param_2);
  return;
}



// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&>::tuple(std::tuple<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>&&>&&)

void __thiscall
std::tuple<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&>::tuple
          (tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
           *this,tuple *param_1)

{
  _Tuple_impl<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&>::
  _Tuple_impl((_Tuple_impl_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
               *)this,(_Tuple_impl *)param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&&>
// std::forward_as_tuple<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>>(std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&)

tuple std::
      forward_as_tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                (basic_string *param_1)

{
  basic_string *pbVar1;
  type *in_RSI;
  
  pbVar1 = forward_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                     (in_RSI);
  tuple<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&>::
  tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___true_
            ((tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
              *)param_1,pbVar1);
  return SUB81(param_1,0);
}



// std::_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const,
// Account>>::_Rb_tree_const_iterator(std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>> const&)

void __thiscall
std::
_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
::_Rb_tree_const_iterator
          (_Rb_tree_const_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
           *this,_Rb_tree_iterator *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  return;
}



// WARNING: Could not reconcile some variable overlaps
// std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>> std::_Rb_tree<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>, std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>,
// std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::_M_emplace_hint_unique<std::piecewise_construct_t
// const&, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&>,
// std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>, std::piecewise_construct_t
// const&, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&>&&, std::tuple<>&&)

_Rb_tree_iterator __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::
_M_emplace_hint_unique_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______std__tuple___
          (_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
           *this,_Rb_tree_const_iterator param_1,piecewise_construct_t *param_2,tuple *param_3,
          tuple *param_4)

{
  tuple *ptVar1;
  tuple *ptVar2;
  piecewise_construct_t *ppVar3;
  basic_string *pbVar4;
  _Rb_tree_node_base *p_Var5;
  long in_FS_OFFSET;
  _Rb_tree_iterator local_48 [8];
  _Rb_tree_node *local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ptVar1 = forward_std__tuple___((type *)param_4);
  ptVar2 = forward_std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______
                     ((type *)param_3);
  ppVar3 = forward_std__piecewise_construct_t_const__((type *)param_2);
  local_40 = _M_create_node_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______std__tuple___
                       (this,ppVar3,ptVar2,ptVar1);
                    // try { // try from 00104db6 to 00104df9 has its CatchHandler @ 00104e37
  pbVar4 = (basic_string *)_S_key(local_40);
  local_38._0_16_ = _M_get_insert_hint_unique_pos(this,param_1,pbVar4);
  p_Var5 = SUB168(local_38._0_16_ >> 0x40,0);
  if (p_Var5 == (_Rb_tree_node_base *)0x0) {
    _M_drop_node(this,local_40);
    _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
    ::_Rb_tree_iterator((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                         *)local_48,local_38._0_8_);
  }
  else {
    local_48[0] = (_Rb_tree_iterator)_M_insert_node(this,SUB168(local_38._0_16_,0),p_Var5,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_48[0];
}



// std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, void
// (*)(), std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::lower_bound(std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const&)

void __thiscall
std::
map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,void(*)(),std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::lower_bound(map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___void______std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
              *this,basic_string *param_1)

{
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
  ::lower_bound((_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
                 *)this,param_1);
  return;
}



// std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, void
// (*)(), std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::end()

void __thiscall
std::
map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,void(*)(),std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::end(map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___void______std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
      *this)

{
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
  ::end((_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
         *)this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::TEMPNAMEPLACEHOLDERVALUE(std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>> const&,
// std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>> const&)

ulong std::operator__(_Rb_tree_iterator *param_1,_Rb_tree_iterator *param_2)

{
  return *(ulong *)param_2 & 0xffffffffffffff00 | (ulong)(*(ulong *)param_1 == *(ulong *)param_2);
}



// std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, void
// (*)(), std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::key_comp() const

undefined4
std::
map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,void(*)(),std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::key_comp(void)

{
  undefined4 unaff_EBX;
  
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
  ::key_comp();
  return unaff_EBX;
}



// std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>::TEMPNAMEPLACEHOLDERVALUE() const

void __thiscall
std::
_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
::operator_(_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
            *this)

{
  _Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
  ::_M_valptr(*(_Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                **)this);
  return;
}



// std::_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void
// (*)()>>::_Rb_tree_const_iterator(std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>> const&)

void __thiscall
std::
_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
::_Rb_tree_const_iterator
          (_Rb_tree_const_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
           *this,_Rb_tree_iterator *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  return;
}



// WARNING: Could not reconcile some variable overlaps
// std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>> std::_Rb_tree<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>, std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>,
// std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::_M_emplace_hint_unique<std::piecewise_construct_t
// const&, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&>,
// std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>, std::piecewise_construct_t
// const&, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&>&&, std::tuple<>&&)

_Rb_tree_iterator __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::
_M_emplace_hint_unique_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______std__tuple___
          (_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
           *this,_Rb_tree_const_iterator param_1,piecewise_construct_t *param_2,tuple *param_3,
          tuple *param_4)

{
  tuple *ptVar1;
  tuple *ptVar2;
  piecewise_construct_t *ppVar3;
  basic_string *pbVar4;
  _Rb_tree_node_base *p_Var5;
  long in_FS_OFFSET;
  _Rb_tree_iterator local_48 [8];
  _Rb_tree_node *local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ptVar1 = forward_std__tuple___((type *)param_4);
  ptVar2 = forward_std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______
                     ((type *)param_3);
  ppVar3 = forward_std__piecewise_construct_t_const__((type *)param_2);
  local_40 = _M_create_node_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______std__tuple___
                       (this,ppVar3,ptVar2,ptVar1);
                    // try { // try from 00104fd4 to 00105017 has its CatchHandler @ 00105055
  pbVar4 = (basic_string *)_S_key(local_40);
  local_38._0_16_ = _M_get_insert_hint_unique_pos(this,param_1,pbVar4);
  p_Var5 = SUB168(local_38._0_16_ >> 0x40,0);
  if (p_Var5 == (_Rb_tree_node_base *)0x0) {
    _M_drop_node(this,local_40);
    _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
    ::_Rb_tree_iterator((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                         *)local_48,local_38._0_8_);
  }
  else {
    local_48[0] = (_Rb_tree_iterator)_M_insert_node(this,SUB168(local_38._0_16_,0),p_Var5,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_48[0];
}



// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>::tuple<void, true>(std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const&)

void __thiscall
std::tuple<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&>::
tuple_void_true_(tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__
                 *this,basic_string *param_1)

{
  _Tuple_impl<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&>
  ::_Tuple_impl((_Tuple_impl_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__
                 *)this,param_1);
  return;
}



// WARNING: Could not reconcile some variable overlaps
// std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>> std::_Rb_tree<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>, std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>,
// std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::_M_emplace_hint_unique<std::piecewise_construct_t
// const&, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>, std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>, std::piecewise_construct_t
// const&, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>&&, std::tuple<>&&)

_Rb_tree_iterator __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::
_M_emplace_hint_unique_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___std__tuple___
          (_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
           *this,_Rb_tree_const_iterator param_1,piecewise_construct_t *param_2,tuple *param_3,
          tuple *param_4)

{
  tuple *ptVar1;
  tuple *ptVar2;
  piecewise_construct_t *ppVar3;
  basic_string *pbVar4;
  _Rb_tree_node_base *p_Var5;
  long in_FS_OFFSET;
  _Rb_tree_iterator local_48 [8];
  _Rb_tree_node *local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ptVar1 = forward_std__tuple___((type *)param_4);
  ptVar2 = forward_std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___
                     ((type *)param_3);
  ppVar3 = forward_std__piecewise_construct_t_const__((type *)param_2);
  local_40 = _M_create_node_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___std__tuple___
                       (this,ppVar3,ptVar2,ptVar1);
                    // try { // try from 00105144 to 00105187 has its CatchHandler @ 001051c5
  pbVar4 = (basic_string *)_S_key(local_40);
  local_38._0_16_ = _M_get_insert_hint_unique_pos(this,param_1,pbVar4);
  p_Var5 = SUB168(local_38._0_16_ >> 0x40,0);
  if (p_Var5 == (_Rb_tree_node_base *)0x0) {
    _M_drop_node(this,local_40);
    _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
    ::_Rb_tree_iterator((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                         *)local_48,local_38._0_8_);
  }
  else {
    local_48[0] = (_Rb_tree_iterator)_M_insert_node(this,SUB168(local_38._0_16_,0),p_Var5,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_48[0];
}



// WARNING: Could not reconcile some variable overlaps
// std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>> std::_Rb_tree<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>, std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>,
// std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::_M_emplace_hint_unique<std::piecewise_construct_t
// const&, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>, std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>, std::piecewise_construct_t
// const&, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>&&, std::tuple<>&&)

_Rb_tree_iterator __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::
_M_emplace_hint_unique_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___std__tuple___
          (_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
           *this,_Rb_tree_const_iterator param_1,piecewise_construct_t *param_2,tuple *param_3,
          tuple *param_4)

{
  tuple *ptVar1;
  tuple *ptVar2;
  piecewise_construct_t *ppVar3;
  basic_string *pbVar4;
  _Rb_tree_node_base *p_Var5;
  long in_FS_OFFSET;
  _Rb_tree_iterator local_48 [8];
  _Rb_tree_node *local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ptVar1 = forward_std__tuple___((type *)param_4);
  ptVar2 = forward_std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___
                     ((type *)param_3);
  ppVar3 = forward_std__piecewise_construct_t_const__((type *)param_2);
  local_40 = _M_create_node_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___std__tuple___
                       (this,ppVar3,ptVar2,ptVar1);
                    // try { // try from 0010528a to 001052cd has its CatchHandler @ 0010530b
  pbVar4 = (basic_string *)_S_key(local_40);
  local_38._0_16_ = _M_get_insert_hint_unique_pos(this,param_1,pbVar4);
  p_Var5 = SUB168(local_38._0_16_ >> 0x40,0);
  if (p_Var5 == (_Rb_tree_node_base *)0x0) {
    _M_drop_node(this,local_40);
    _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
    ::_Rb_tree_iterator((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                         *)local_48,local_38._0_8_);
  }
  else {
    local_48[0] = (_Rb_tree_iterator)_M_insert_node(this,SUB168(local_38._0_16_,0),p_Var5,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_48[0];
}



// __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>>::new_allocator()

void __gnu_cxx::
     new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
     ::new_allocator(void)

{
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::_S_right(std::_Rb_tree_node_base*)

undefined8
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::_S_right(_Rb_tree_node_base *param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::_S_left(std::_Rb_tree_node_base*)

undefined8
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::_S_left(_Rb_tree_node_base *param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void
// (*)()>>>::_M_drop_node(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>*)

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::_M_drop_node(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
               *this,_Rb_tree_node *param_1)

{
  _M_destroy_node(this,param_1);
  _M_put_node(this,param_1);
  return;
}



// __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>>::new_allocator()

void __gnu_cxx::
     new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
     ::new_allocator(void)

{
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::_S_right(std::_Rb_tree_node_base*)

undefined8
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::_S_right(_Rb_tree_node_base *param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::_S_left(std::_Rb_tree_node_base*)

undefined8
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::_S_left(_Rb_tree_node_base *param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const,
// Account>>>::_M_drop_node(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>*)

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::_M_drop_node(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
               *this,_Rb_tree_node *param_1)

{
  _M_destroy_node(this,param_1);
  _M_put_node(this,param_1);
  return;
}



// bool __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<char*,
// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>> const&,
// __gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>> const&)

bool __gnu_cxx::operator__(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>
                   ::base((__normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                           *)param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>
                   ::base((__normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                           *)param_2);
  return lVar1 == *plVar2;
}



// __gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>>::TEMPNAMEPLACEHOLDERVALUE()

__normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
* __thiscall
__gnu_cxx::
__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>
::operator__(__normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
             *this)

{
  *(long *)this = *(long *)this + -1;
  return this;
}



// bool __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<char*,
// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>> const&,
// __gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>> const&)

bool __gnu_cxx::operator_(__normal_iterator *param_1,__normal_iterator *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  
  puVar2 = (ulong *)__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>
                    ::base((__normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                            *)param_1);
  uVar1 = *puVar2;
  puVar2 = (ulong *)__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>
                    ::base((__normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                            *)param_2);
  return uVar1 < *puVar2;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::iter_swap<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>, __gnu_cxx::__normal_iterator<char*,
// std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>>>(__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>, __gnu_cxx::__normal_iterator<char*,
// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>)

void std::
     iter_swap___gnu_cxx____normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______gnu_cxx____normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____
               (__normal_iterator param_1,__normal_iterator param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = CONCAT44(in_register_0000003c,param_1);
  local_28 = CONCAT44(in_register_00000034,param_2);
  pcVar1 = (char *)__gnu_cxx::
                   __normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>
                   ::operator_((__normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                                *)&local_28);
  pcVar2 = (char *)__gnu_cxx::
                   __normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>
                   ::operator_((__normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                                *)local_20);
  swap_char_(pcVar2,pcVar1);
  return;
}



// __gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>>::TEMPNAMEPLACEHOLDERVALUE()

__normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
* __thiscall
__gnu_cxx::
__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>
::operator__(__normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
             *this)

{
  *(long *)this = *(long *)this + 1;
  return this;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::lower_bound(std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const&)

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::lower_bound(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
              *this,basic_string *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node *p_Var2;
  
  p_Var1 = (_Rb_tree_node_base *)_M_end(this);
  p_Var2 = (_Rb_tree_node *)_M_begin(this);
  _M_lower_bound(this,p_Var2,p_Var1,param_1);
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::end()

undefined8 __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::end(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
      *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
  ::_Rb_tree_iterator((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                       *)&local_18,(_Rb_tree_node_base *)(this + 8));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_18;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::key_comp() const

void std::
     _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
     ::key_comp(void)

{
  return;
}



// std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>::_M_valptr()

void __thiscall
std::
_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
::_M_valptr(_Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
            *this)

{
  __gnu_cxx::
  __aligned_membuf<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
  ::_M_ptr((__aligned_membuf_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
            *)(this + 0x20));
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// bool std::TEMPNAMEPLACEHOLDERVALUE(std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const&)

bool std::operator_(basic_string *param_1,basic_string *param_2)

{
  byte extraout_var;
  
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::compare(param_1);
  return (bool)(extraout_var >> 7);
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&&
// std::forward<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>>(std::remove_reference<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>::type&)

basic_string *
std::forward_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
          (type *param_1)

{
  return (basic_string *)param_1;
}



// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&>::tuple<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>, true>(std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&)

void __thiscall
std::tuple<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&>::
tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___true_
          (tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
           *this,basic_string *param_1)

{
  basic_string *pbVar1;
  
  pbVar1 = forward_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                     ((type *)param_1);
  _Tuple_impl<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&>::
  _Tuple_impl_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
            ((_Tuple_impl_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
              *)this,pbVar1);
  return;
}



// std::_Tuple_impl<0ul, std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&>::_Tuple_impl(std::_Tuple_impl<0ul, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>&&>&&)

void __thiscall
std::_Tuple_impl<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&>
::_Tuple_impl(_Tuple_impl_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
              *this,_Tuple_impl *param_1)

{
  type *ptVar1;
  basic_string *pbVar2;
  
  ptVar1 = (type *)_M_head(param_1);
  pbVar2 = forward_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
                     (ptVar1);
  _Head_base<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&,false>
  ::_Head_base_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
            ((_Head_base_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____false_
              *)this,pbVar2);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::piecewise_construct_t const& std::forward<std::piecewise_construct_t
// const&>(std::remove_reference<std::piecewise_construct_t const&>::type&)

piecewise_construct_t * std::forward_std__piecewise_construct_t_const__(type *param_1)

{
  return (piecewise_construct_t *)param_1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&&>&&
// std::forward<std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&>>(std::remove_reference<std::tuple<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>&&>>::type&)

tuple * std::
        forward_std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______
                  (type *param_1)

{
  return (tuple *)param_1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::tuple<>&& std::forward<std::tuple<>>(std::remove_reference<std::tuple<>>::type&)

tuple * std::forward_std__tuple___(type *param_1)

{
  return (tuple *)param_1;
}



// std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>* std::_Rb_tree<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>, std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>,
// std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::_M_create_node<std::piecewise_construct_t const&,
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&&>,
// std::tuple<>>(std::piecewise_construct_t const&, std::tuple<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>&&>&&, std::tuple<>&&)

_Rb_tree_node * __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::
_M_create_node_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______std__tuple___
          (_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
           *this,piecewise_construct_t *param_1,tuple *param_2,tuple *param_3)

{
  _Rb_tree_node *p_Var1;
  tuple *ptVar2;
  tuple *ptVar3;
  piecewise_construct_t *ppVar4;
  
  p_Var1 = (_Rb_tree_node *)_M_get_node(this);
  ptVar2 = forward_std__tuple___((type *)param_3);
  ptVar3 = forward_std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______
                     ((type *)param_2);
  ppVar4 = forward_std__piecewise_construct_t_const__((type *)param_1);
  _M_construct_node_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______std__tuple___
            (this,p_Var1,ppVar4,ptVar3,ptVar2);
  return p_Var1;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const,
// Account>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const&)

undefined8 __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
           *this,_Rb_tree_const_iterator param_1,basic_string *param_2)

{
  bool bVar1;
  _Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
  *p_Var2;
  char cVar3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  long lVar6;
  _Rb_tree_node_base **pp_Var7;
  basic_string *pbVar8;
  _Rb_tree_node_base **pp_Var9;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  undefined8 local_68;
  _Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
  *local_60;
  _Rb_tree_node_base *local_50;
  _Rb_tree_node_base *local_48;
  _Rb_tree_node_base *local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_68 = CONCAT44(in_register_00000034,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = this;
  p_Var4 = (_Rb_tree_node_base *)
           _Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
           ::_M_const_cast((_Rb_tree_const_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                            *)&local_68);
  local_50 = p_Var4;
  p_Var5 = (_Rb_tree_node_base *)_M_end(local_60);
  p_Var2 = local_60;
  if (p_Var4 != p_Var5) {
    pbVar8 = (basic_string *)_S_key(local_50);
    cVar3 = less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>::
            operator__((less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                        *)p_Var2,param_2,pbVar8);
    p_Var4 = local_50;
    p_Var2 = local_60;
    if (cVar3 == '\0') {
      pbVar8 = (basic_string *)_S_key(local_50);
      cVar3 = less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>::
              operator__((less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                          *)p_Var2,pbVar8,param_2);
      p_Var4 = local_50;
      if (cVar3 == '\0') {
        local_40 = (_Rb_tree_node_base *)0x0;
        pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
        pair_std___Rb_tree_node_base___true_
                  ((pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *)local_38,&local_50,
                   &local_40);
      }
      else {
        local_48 = local_50;
        pp_Var7 = (_Rb_tree_node_base **)_M_rightmost(local_60);
        p_Var2 = local_60;
        if (p_Var4 == *pp_Var7) {
          pp_Var7 = (_Rb_tree_node_base **)_M_rightmost(local_60);
          local_40 = (_Rb_tree_node_base *)0x0;
          pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
          pair_std___Rb_tree_node_base___true_
                    ((pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *)local_38,&local_40,
                     pp_Var7);
        }
        else {
          pp_Var7 = (_Rb_tree_node_base **)
                    _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
                    ::operator__((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                                  *)&local_48);
          pbVar8 = (basic_string *)_S_key(*pp_Var7);
          cVar3 = less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>
                  ::operator__((less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                                *)p_Var2,param_2,pbVar8);
          if (cVar3 == '\0') {
            local_38[0] = _M_get_insert_unique_pos(local_60,param_2);
          }
          else {
            lVar6 = _S_right(local_50);
            if (lVar6 == 0) {
              local_40 = (_Rb_tree_node_base *)0x0;
              pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
              pair_std___Rb_tree_node_base___true_
                        ((pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *)local_38,
                         &local_40,&local_50);
            }
            else {
              pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
              pair_std___Rb_tree_node_base___std___Rb_tree_node_base___true_
                        ((pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *)local_38,
                         &local_48,&local_48);
            }
          }
        }
      }
    }
    else {
      local_48 = local_50;
      pp_Var7 = (_Rb_tree_node_base **)_M_leftmost(local_60);
      p_Var2 = local_60;
      if (p_Var4 == *pp_Var7) {
        pp_Var7 = (_Rb_tree_node_base **)_M_leftmost(local_60);
        pp_Var9 = (_Rb_tree_node_base **)_M_leftmost(local_60);
        pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
        pair_std___Rb_tree_node_base___std___Rb_tree_node_base___true_
                  ((pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *)local_38,pp_Var9,
                   pp_Var7);
      }
      else {
        pp_Var7 = (_Rb_tree_node_base **)
                  _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
                  ::operator__((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                                *)&local_48);
        pbVar8 = (basic_string *)_S_key(*pp_Var7);
        cVar3 = less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>::
                operator__((less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                            *)p_Var2,pbVar8,param_2);
        if (cVar3 == '\0') {
          local_38[0] = _M_get_insert_unique_pos(local_60,param_2);
        }
        else {
          lVar6 = _S_right(local_48);
          if (lVar6 == 0) {
            local_40 = (_Rb_tree_node_base *)0x0;
            pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
            pair_std___Rb_tree_node_base___true_
                      ((pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *)local_38,&local_40
                       ,&local_48);
          }
          else {
            pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
            pair_std___Rb_tree_node_base___std___Rb_tree_node_base___true_
                      ((pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *)local_38,&local_50
                       ,&local_50);
          }
        }
      }
    }
    goto LAB_00105b1e;
  }
  lVar6 = size(local_60);
  p_Var2 = local_60;
  if (lVar6 == 0) {
LAB_00105832:
    bVar1 = false;
  }
  else {
    pp_Var7 = (_Rb_tree_node_base **)_M_rightmost(local_60);
    pbVar8 = (basic_string *)_S_key(*pp_Var7);
    cVar3 = less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>::
            operator__((less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                        *)p_Var2,pbVar8,param_2);
    if (cVar3 == '\0') goto LAB_00105832;
    bVar1 = true;
  }
  if (bVar1) {
    pp_Var7 = (_Rb_tree_node_base **)_M_rightmost(local_60);
    local_40 = (_Rb_tree_node_base *)0x0;
    pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::pair_std___Rb_tree_node_base___true_
              ((pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *)local_38,&local_40,pp_Var7
              );
  }
  else {
    local_38[0] = _M_get_insert_unique_pos(local_60,param_2);
  }
LAB_00105b1e:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_38[0];
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const,
// Account>>>::_S_key(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>> const*)

void std::
     _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
     ::_S_key(_Rb_tree_node *param_1)

{
  pair *ppVar1;
  long in_FS_OFFSET;
  _Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
  local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ppVar1 = (pair *)_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
                   ::_M_valptr((_Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                                *)param_1);
  _Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
  ::operator__(&local_11,ppVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::_M_insert_node(std::_Rb_tree_node_base*,
// std::_Rb_tree_node_base*, std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>*)

undefined8 __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::_M_insert_node(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
                 *this,_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2,
                _Rb_tree_node *param_3)

{
  char cVar1;
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  basic_string *pbVar4;
  basic_string *pbVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (_Rb_tree_node_base *)0x0) {
    p_Var3 = (_Rb_tree_node_base *)_M_end(this);
    if (param_2 != p_Var3) {
      pbVar4 = (basic_string *)_S_key(param_2);
      pbVar5 = (basic_string *)_S_key(param_3);
      cVar1 = less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>::
              operator__((less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                          *)this,pbVar5,pbVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00105c10;
      }
    }
  }
  bVar2 = true;
LAB_00105c10:
  std::_Rb_tree_insert_and_rebalance
            (bVar2,(_Rb_tree_node_base *)param_3,param_2,(_Rb_tree_node_base *)(this + 8));
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
  ::_Rb_tree_iterator((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                       *)&local_28,(_Rb_tree_node_base *)param_3);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_28;
}



// std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>::_Rb_tree_iterator(std::_Rb_tree_node_base*)

void __thiscall
std::
_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
::_Rb_tree_iterator(_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                    *this,_Rb_tree_node_base *param_1)

{
  *(_Rb_tree_node_base **)this = param_1;
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::lower_bound(std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const&)

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::lower_bound(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
              *this,basic_string *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node *p_Var2;
  
  p_Var1 = (_Rb_tree_node_base *)_M_end(this);
  p_Var2 = (_Rb_tree_node *)_M_begin(this);
  _M_lower_bound(this,p_Var2,p_Var1,param_1);
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::end()

undefined8 __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::end(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
      *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
  ::_Rb_tree_iterator((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                       *)&local_18,(_Rb_tree_node_base *)(this + 8));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_18;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::key_comp() const

void std::
     _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
     ::key_comp(void)

{
  return;
}



// std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>::_M_valptr()

void __thiscall
std::
_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
::_M_valptr(_Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
            *this)

{
  __gnu_cxx::
  __aligned_membuf<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
  ::_M_ptr((__aligned_membuf_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
            *)(this + 0x20));
  return;
}



// std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>* std::_Rb_tree<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>, std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>,
// std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::_M_create_node<std::piecewise_construct_t const&,
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&&>,
// std::tuple<>>(std::piecewise_construct_t const&, std::tuple<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>&&>&&, std::tuple<>&&)

_Rb_tree_node * __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::
_M_create_node_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______std__tuple___
          (_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
           *this,piecewise_construct_t *param_1,tuple *param_2,tuple *param_3)

{
  _Rb_tree_node *p_Var1;
  tuple *ptVar2;
  tuple *ptVar3;
  piecewise_construct_t *ppVar4;
  
  p_Var1 = (_Rb_tree_node *)_M_get_node(this);
  ptVar2 = forward_std__tuple___((type *)param_3);
  ptVar3 = forward_std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______
                     ((type *)param_2);
  ppVar4 = forward_std__piecewise_construct_t_const__((type *)param_1);
  _M_construct_node_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______std__tuple___
            (this,p_Var1,ppVar4,ptVar3,ptVar2);
  return p_Var1;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void
// (*)()>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>,
// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)

undefined8 __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
           *this,_Rb_tree_const_iterator param_1,basic_string *param_2)

{
  bool bVar1;
  _Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
  *p_Var2;
  char cVar3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  long lVar6;
  _Rb_tree_node_base **pp_Var7;
  basic_string *pbVar8;
  _Rb_tree_node_base **pp_Var9;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  undefined8 local_68;
  _Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
  *local_60;
  _Rb_tree_node_base *local_50;
  _Rb_tree_node_base *local_48;
  _Rb_tree_node_base *local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_68 = CONCAT44(in_register_00000034,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = this;
  p_Var4 = (_Rb_tree_node_base *)
           _Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
           ::_M_const_cast((_Rb_tree_const_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                            *)&local_68);
  local_50 = p_Var4;
  p_Var5 = (_Rb_tree_node_base *)_M_end(local_60);
  p_Var2 = local_60;
  if (p_Var4 != p_Var5) {
    pbVar8 = (basic_string *)_S_key(local_50);
    cVar3 = less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>::
            operator__((less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                        *)p_Var2,param_2,pbVar8);
    p_Var4 = local_50;
    p_Var2 = local_60;
    if (cVar3 == '\0') {
      pbVar8 = (basic_string *)_S_key(local_50);
      cVar3 = less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>::
              operator__((less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                          *)p_Var2,pbVar8,param_2);
      p_Var4 = local_50;
      if (cVar3 == '\0') {
        local_40 = (_Rb_tree_node_base *)0x0;
        pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
        pair_std___Rb_tree_node_base___true_
                  ((pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *)local_38,&local_50,
                   &local_40);
      }
      else {
        local_48 = local_50;
        pp_Var7 = (_Rb_tree_node_base **)_M_rightmost(local_60);
        p_Var2 = local_60;
        if (p_Var4 == *pp_Var7) {
          pp_Var7 = (_Rb_tree_node_base **)_M_rightmost(local_60);
          local_40 = (_Rb_tree_node_base *)0x0;
          pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
          pair_std___Rb_tree_node_base___true_
                    ((pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *)local_38,&local_40,
                     pp_Var7);
        }
        else {
          pp_Var7 = (_Rb_tree_node_base **)
                    _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
                    ::operator__((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                                  *)&local_48);
          pbVar8 = (basic_string *)_S_key(*pp_Var7);
          cVar3 = less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>
                  ::operator__((less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                                *)p_Var2,param_2,pbVar8);
          if (cVar3 == '\0') {
            local_38[0] = _M_get_insert_unique_pos(local_60,param_2);
          }
          else {
            lVar6 = _S_right(local_50);
            if (lVar6 == 0) {
              local_40 = (_Rb_tree_node_base *)0x0;
              pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
              pair_std___Rb_tree_node_base___true_
                        ((pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *)local_38,
                         &local_40,&local_50);
            }
            else {
              pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
              pair_std___Rb_tree_node_base___std___Rb_tree_node_base___true_
                        ((pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *)local_38,
                         &local_48,&local_48);
            }
          }
        }
      }
    }
    else {
      local_48 = local_50;
      pp_Var7 = (_Rb_tree_node_base **)_M_leftmost(local_60);
      p_Var2 = local_60;
      if (p_Var4 == *pp_Var7) {
        pp_Var7 = (_Rb_tree_node_base **)_M_leftmost(local_60);
        pp_Var9 = (_Rb_tree_node_base **)_M_leftmost(local_60);
        pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
        pair_std___Rb_tree_node_base___std___Rb_tree_node_base___true_
                  ((pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *)local_38,pp_Var9,
                   pp_Var7);
      }
      else {
        pp_Var7 = (_Rb_tree_node_base **)
                  _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
                  ::operator__((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                                *)&local_48);
        pbVar8 = (basic_string *)_S_key(*pp_Var7);
        cVar3 = less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>::
                operator__((less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                            *)p_Var2,pbVar8,param_2);
        if (cVar3 == '\0') {
          local_38[0] = _M_get_insert_unique_pos(local_60,param_2);
        }
        else {
          lVar6 = _S_right(local_48);
          if (lVar6 == 0) {
            local_40 = (_Rb_tree_node_base *)0x0;
            pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
            pair_std___Rb_tree_node_base___true_
                      ((pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *)local_38,&local_40
                       ,&local_48);
          }
          else {
            pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
            pair_std___Rb_tree_node_base___std___Rb_tree_node_base___true_
                      ((pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *)local_38,&local_50
                       ,&local_50);
          }
        }
      }
    }
    goto LAB_00106172;
  }
  lVar6 = size(local_60);
  p_Var2 = local_60;
  if (lVar6 == 0) {
LAB_00105e86:
    bVar1 = false;
  }
  else {
    pp_Var7 = (_Rb_tree_node_base **)_M_rightmost(local_60);
    pbVar8 = (basic_string *)_S_key(*pp_Var7);
    cVar3 = less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>::
            operator__((less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                        *)p_Var2,pbVar8,param_2);
    if (cVar3 == '\0') goto LAB_00105e86;
    bVar1 = true;
  }
  if (bVar1) {
    pp_Var7 = (_Rb_tree_node_base **)_M_rightmost(local_60);
    local_40 = (_Rb_tree_node_base *)0x0;
    pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::pair_std___Rb_tree_node_base___true_
              ((pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *)local_38,&local_40,pp_Var7
              );
  }
  else {
    local_38[0] = _M_get_insert_unique_pos(local_60,param_2);
  }
LAB_00106172:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_38[0];
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void
// (*)()>>>::_S_key(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>> const*)

void std::
     _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
     ::_S_key(_Rb_tree_node *param_1)

{
  pair *ppVar1;
  long in_FS_OFFSET;
  _Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
  local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ppVar1 = (pair *)_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
                   ::_M_valptr((_Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                                *)param_1);
  _Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
  ::operator__(&local_11,ppVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::_M_insert_node(std::_Rb_tree_node_base*,
// std::_Rb_tree_node_base*, std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>*)

undefined8 __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::_M_insert_node(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
                 *this,_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2,
                _Rb_tree_node *param_3)

{
  char cVar1;
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  basic_string *pbVar4;
  basic_string *pbVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (_Rb_tree_node_base *)0x0) {
    p_Var3 = (_Rb_tree_node_base *)_M_end(this);
    if (param_2 != p_Var3) {
      pbVar4 = (basic_string *)_S_key(param_2);
      pbVar5 = (basic_string *)_S_key(param_3);
      cVar1 = less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>::
              operator__((less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                          *)this,pbVar5,pbVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00106264;
      }
    }
  }
  bVar2 = true;
LAB_00106264:
  std::_Rb_tree_insert_and_rebalance
            (bVar2,(_Rb_tree_node_base *)param_3,param_2,(_Rb_tree_node_base *)(this + 8));
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
  ::_Rb_tree_iterator((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                       *)&local_28,(_Rb_tree_node_base *)param_3);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_28;
}



// std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>::_Rb_tree_iterator(std::_Rb_tree_node_base*)

void __thiscall
std::
_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
::_Rb_tree_iterator(_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                    *this,_Rb_tree_node_base *param_1)

{
  *(_Rb_tree_node_base **)this = param_1;
  return;
}



// std::_Tuple_impl<0ul, std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const&>::_Tuple_impl(std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const&)

void __thiscall
std::
_Tuple_impl<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&>
::_Tuple_impl(_Tuple_impl_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__
              *this,basic_string *param_1)

{
  _Head_base<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&,false>
  ::_Head_base((_Head_base_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__false_
                *)this,param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>&& std::forward<std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const&>>(std::remove_reference<std::tuple<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const&>>::type&)

tuple * std::
        forward_std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___
                  (type *param_1)

{
  return (tuple *)param_1;
}



// std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>* std::_Rb_tree<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>, std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>,
// std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::_M_create_node<std::piecewise_construct_t const&,
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>, std::tuple<>>(std::piecewise_construct_t const&,
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>&&, std::tuple<>&&)

_Rb_tree_node * __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::
_M_create_node_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___std__tuple___
          (_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
           *this,piecewise_construct_t *param_1,tuple *param_2,tuple *param_3)

{
  _Rb_tree_node *p_Var1;
  tuple *ptVar2;
  tuple *ptVar3;
  piecewise_construct_t *ppVar4;
  
  p_Var1 = (_Rb_tree_node *)_M_get_node(this);
  ptVar2 = forward_std__tuple___((type *)param_3);
  ptVar3 = forward_std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___
                     ((type *)param_2);
  ppVar4 = forward_std__piecewise_construct_t_const__((type *)param_1);
  _M_construct_node_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___std__tuple___
            (this,p_Var1,ppVar4,ptVar3,ptVar2);
  return p_Var1;
}



// std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>* std::_Rb_tree<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>, std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>,
// std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::_M_create_node<std::piecewise_construct_t const&,
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>, std::tuple<>>(std::piecewise_construct_t const&,
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>&&, std::tuple<>&&)

_Rb_tree_node * __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::
_M_create_node_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___std__tuple___
          (_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
           *this,piecewise_construct_t *param_1,tuple *param_2,tuple *param_3)

{
  _Rb_tree_node *p_Var1;
  tuple *ptVar2;
  tuple *ptVar3;
  piecewise_construct_t *ppVar4;
  
  p_Var1 = (_Rb_tree_node *)_M_get_node(this);
  ptVar2 = forward_std__tuple___((type *)param_3);
  ptVar3 = forward_std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___
                     ((type *)param_2);
  ppVar4 = forward_std__piecewise_construct_t_const__((type *)param_1);
  _M_construct_node_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___std__tuple___
            (this,p_Var1,ppVar4,ptVar3,ptVar2);
  return p_Var1;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void
// (*)()>>>::_M_destroy_node(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>*)

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::_M_destroy_node(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
                  *this,_Rb_tree_node *param_1)

{
  pair *ppVar1;
  allocator *paVar2;
  
  ppVar1 = (pair *)_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
                   ::_M_valptr((_Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                                *)param_1);
  paVar2 = (allocator *)_M_get_Node_allocator(this);
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>>
  ::
  destroy_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
            (paVar2,ppVar1);
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void
// (*)()>>>::_M_put_node(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>*)

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::_M_put_node(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
              *this,_Rb_tree_node *param_1)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_M_get_Node_allocator(this);
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>>
  ::deallocate(paVar1,param_1,1);
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const,
// Account>>>::_M_destroy_node(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>*)

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::_M_destroy_node(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
                  *this,_Rb_tree_node *param_1)

{
  pair *ppVar1;
  allocator *paVar2;
  
  ppVar1 = (pair *)_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
                   ::_M_valptr((_Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                                *)param_1);
  paVar2 = (allocator *)_M_get_Node_allocator(this);
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>>
  ::
  destroy_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
            (paVar2,ppVar1);
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const,
// Account>>>::_M_put_node(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>*)

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::_M_put_node(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
              *this,_Rb_tree_node *param_1)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_M_get_Node_allocator(this);
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>>
  ::deallocate(paVar1,param_1,1);
  return;
}



// __gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>>::base() const

__normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
* __thiscall
__gnu_cxx::
__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>
::base(__normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
       *this)

{
  return this;
}



// __gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>>::TEMPNAMEPLACEHOLDERVALUE() const

undefined8 __thiscall
__gnu_cxx::
__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>
::operator_(__normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
            *this)

{
  return *(undefined8 *)this;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::remove_reference<char&>::type&& std::move<char&>(char&)

type * std::move_char__(char *param_1)

{
  return (type *)param_1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::enable_if<std::__and_<std::__not_<std::__is_tuple_like<char>>,
// std::is_move_constructible<char>, std::is_move_assignable<char>>::value, void>::type
// std::swap<char>(char&, char&)

type std::swap_char_(char *param_1,char *param_2)

{
  type *ptVar1;
  long in_FS_OFFSET;
  type local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ptVar1 = move_char__(param_1);
  local_11 = *ptVar1;
  ptVar1 = move_char__(param_2);
  *param_1 = (char)*ptVar1;
  ptVar1 = move_char__((char *)&local_11);
  *param_2 = (char)*ptVar1;
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return 0;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::_M_end()

_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
* __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::_M_end(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
         *this)

{
  return this + 8;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const,
// Account>>>::_M_lower_bound(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>*, std::_Rb_tree_node_base*,
// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)

undefined8 __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::_M_lower_bound(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
                 *this,_Rb_tree_node *param_1,_Rb_tree_node_base *param_2,basic_string *param_3)

{
  char cVar1;
  basic_string *pbVar2;
  long in_FS_OFFSET;
  _Rb_tree_node_base *local_40;
  _Rb_tree_node *local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_2;
  local_38 = param_1;
  while (local_38 != (_Rb_tree_node *)0x0) {
    pbVar2 = (basic_string *)_S_key(local_38);
    cVar1 = less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>::
            operator__((less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                        *)this,pbVar2,param_3);
    if (cVar1 == '\x01') {
      local_38 = (_Rb_tree_node *)_S_right((_Rb_tree_node_base *)local_38);
    }
    else {
      local_40 = (_Rb_tree_node_base *)local_38;
      local_38 = (_Rb_tree_node *)_S_left((_Rb_tree_node_base *)local_38);
    }
  }
  _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
  ::_Rb_tree_iterator((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                       *)&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_28;
}



// __gnu_cxx::__aligned_membuf<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>::_M_ptr()

void __thiscall
__gnu_cxx::
__aligned_membuf<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
::_M_ptr(__aligned_membuf_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
         *this)

{
  _M_addr(this);
  return;
}



// std::_Tuple_impl<0ul, std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&>::_Tuple_impl<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>>(std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&)

void __thiscall
std::_Tuple_impl<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&>
::_Tuple_impl_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
          (_Tuple_impl_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
           *this,basic_string *param_1)

{
  basic_string *pbVar1;
  
  pbVar1 = forward_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                     ((type *)param_1);
  _Head_base<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&,false>
  ::_Head_base_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
            ((_Head_base_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____false_
              *)this,pbVar1);
  return;
}



// std::_Tuple_impl<0ul, std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&>::_M_head(std::_Tuple_impl<0ul, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>&&>&)

void std::
     _Tuple_impl<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&>
     ::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&,false>
  ::_M_head((_Head_base *)param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&&
// std::forward<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&>(std::remove_reference<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>&&>::type&)

basic_string *
std::forward_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
          (type *param_1)

{
  return (basic_string *)param_1;
}



// std::_Head_base<0ul, std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&, false>::_Head_base<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>(std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>&&)

void __thiscall
std::
_Head_base<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&,false>
::_Head_base_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
          (_Head_base_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____false_
           *this,basic_string *param_1)

{
  basic_string *pbVar1;
  
  pbVar1 = forward_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                     ((type *)param_1);
  *(basic_string **)this = pbVar1;
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::_M_get_node()

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::_M_get_node(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
              *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_M_get_Node_allocator(this);
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>>
  ::allocate(paVar1,1);
  return;
}



// void std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>, std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>,
// std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::_M_construct_node<std::piecewise_construct_t const&,
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&&>,
// std::tuple<>>(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>*, std::piecewise_construct_t
// const&, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&>&&, std::tuple<>&&)

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::
_M_construct_node_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______std__tuple___
          (_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
           *this,_Rb_tree_node *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4
          )

{
  tuple *ptVar1;
  tuple *ptVar2;
  piecewise_construct_t *ppVar3;
  pair *ppVar4;
  allocator *paVar5;
  
  operator_new(0x90,param_1);
  ptVar1 = forward_std__tuple___((type *)param_4);
  ptVar2 = forward_std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______
                     ((type *)param_3);
  ppVar3 = forward_std__piecewise_construct_t_const__((type *)param_2);
  ppVar4 = (pair *)_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
                   ::_M_valptr((_Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                                *)param_1);
  paVar5 = (allocator *)_M_get_Node_allocator(this);
                    // try { // try from 0010680f to 00106813 has its CatchHandler @ 00106816
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>>
  ::
  construct_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______std__tuple___
            (paVar5,ppVar4,ppVar3,ptVar2,ptVar1);
  return;
}



// std::_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>::_M_const_cast() const

undefined8 __thiscall
std::
_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
::_M_const_cast(_Rb_tree_const_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
  ::_Rb_tree_iterator((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                       *)&local_18,*(_Rb_tree_node_base **)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_18;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::size() const

undefined8 __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::size(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
       *this)

{
  return *(undefined8 *)(this + 0x28);
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::_M_rightmost()

_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
* __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::_M_rightmost(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
               *this)

{
  return this + 0x20;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::_S_key(std::_Rb_tree_node_base const*)

void std::
     _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
     ::_S_key(_Rb_tree_node_base *param_1)

{
  _S_key((_Rb_tree_node *)param_1);
  return;
}



// std::pair<std::_Rb_tree_node_base*, std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node_base*&,
// true>(std::_Rb_tree_node_base* const&, std::_Rb_tree_node_base*&)

void __thiscall
std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::pair_std___Rb_tree_node_base___true_
          (pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *this,
          _Rb_tree_node_base **param_1,_Rb_tree_node_base **param_2)

{
  _Rb_tree_node_base **pp_Var1;
  
  *(_Rb_tree_node_base **)this = *param_1;
  pp_Var1 = forward_std___Rb_tree_node_base___((type *)param_2);
  *(_Rb_tree_node_base **)(this + 8) = *pp_Var1;
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const,
// Account>>>::_M_get_insert_unique_pos(std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const&)

undefined8 __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::_M_get_insert_unique_pos
          (_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
           *this,basic_string *param_1)

{
  char cVar1;
  basic_string *pbVar2;
  long in_FS_OFFSET;
  char local_59;
  _Rb_tree_node *local_58;
  _Rb_tree_node_base *local_50;
  _Rb_tree_node_base *local_48;
  _Rb_tree_node_base *local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (_Rb_tree_node *)_M_begin(this);
  local_50 = (_Rb_tree_node_base *)_M_end(this);
  local_59 = '\x01';
  while (local_58 != (_Rb_tree_node *)0x0) {
    local_50 = (_Rb_tree_node_base *)local_58;
    pbVar2 = (basic_string *)_S_key(local_58);
    local_59 = less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>::
               operator__((less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                           *)this,param_1,pbVar2);
    if (local_59 == '\0') {
      local_58 = (_Rb_tree_node *)_S_right((_Rb_tree_node_base *)local_58);
    }
    else {
      local_58 = (_Rb_tree_node *)_S_left((_Rb_tree_node_base *)local_58);
    }
  }
  _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
  ::_Rb_tree_iterator((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                       *)&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = begin(this);
    cVar1 = operator__((_Rb_tree_iterator *)&local_48,(_Rb_tree_iterator *)local_38);
    if (cVar1 != '\0') {
      pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
      pair_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account_____std___Rb_tree_node_base___true_
                ((pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *)local_38,&local_58,
                 &local_50);
      goto LAB_00106aba;
    }
    _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
    ::operator__((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                  *)&local_48);
  }
  pbVar2 = (basic_string *)_S_key(local_48);
  cVar1 = less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>::
          operator__((less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                      *)this,pbVar2,param_1);
  if (cVar1 == '\0') {
    local_40 = (_Rb_tree_node_base *)0x0;
    pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::pair_std___Rb_tree_node_base___true_
              ((pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *)local_38,&local_48,
               &local_40);
  }
  else {
    pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
    pair_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account_____std___Rb_tree_node_base___true_
              ((pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *)local_38,&local_58,
               &local_50);
  }
LAB_00106aba:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::_M_leftmost()

_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
* __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::_M_leftmost(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
              *this)

{
  return this + 0x18;
}



// std::pair<std::_Rb_tree_node_base*, std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node_base*&,
// std::_Rb_tree_node_base*&, true>(std::_Rb_tree_node_base*&, std::_Rb_tree_node_base*&)

void __thiscall
std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
pair_std___Rb_tree_node_base___std___Rb_tree_node_base___true_
          (pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *this,
          _Rb_tree_node_base **param_1,_Rb_tree_node_base **param_2)

{
  _Rb_tree_node_base **pp_Var1;
  
  pp_Var1 = forward_std___Rb_tree_node_base___((type *)param_1);
  *(_Rb_tree_node_base **)this = *pp_Var1;
  pp_Var1 = forward_std___Rb_tree_node_base___((type *)param_2);
  *(_Rb_tree_node_base **)(this + 8) = *pp_Var1;
  return;
}



// std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>::TEMPNAMEPLACEHOLDERVALUE()

_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
* __thiscall
std::
_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
::operator__(_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
             *this)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement(*(_Rb_tree_node_base **)this);
  *(undefined8 *)this = uVar1;
  return this;
}



// std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>::TEMPNAMEPLACEHOLDERVALUE()

_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
* __thiscall
std::
_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
::operator__(_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
             *this)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment(*(_Rb_tree_node_base **)this);
  *(undefined8 *)this = uVar1;
  return this;
}



// std::pair<std::_Rb_tree_node_base*, std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node_base*&,
// true>(std::_Rb_tree_node_base*&, std::_Rb_tree_node_base* const&)

void __thiscall
std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::pair_std___Rb_tree_node_base___true_
          (pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *this,
          _Rb_tree_node_base **param_1,_Rb_tree_node_base **param_2)

{
  _Rb_tree_node_base **pp_Var1;
  
  pp_Var1 = forward_std___Rb_tree_node_base___((type *)param_1);
  *(_Rb_tree_node_base **)this = *pp_Var1;
  *(_Rb_tree_node_base **)(this + 8) = *param_2;
  return;
}



// std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>::_M_valptr() const

void __thiscall
std::
_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
::_M_valptr(_Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
            *this)

{
  __gnu_cxx::
  __aligned_membuf<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
  ::_M_ptr((__aligned_membuf_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
            *)(this + 0x20));
  return;
}



// std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const,
// Account>>::TEMPNAMEPLACEHOLDERVALUE(std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account> const&) const

pair * __thiscall
std::
_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
::operator__(_Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
             *this,pair *param_1)

{
  return param_1;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::_M_end()

_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
* __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::_M_end(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
         *this)

{
  return this + 8;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void
// (*)()>>>::_M_lower_bound(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>*, std::_Rb_tree_node_base*,
// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)

undefined8 __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::_M_lower_bound(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
                 *this,_Rb_tree_node *param_1,_Rb_tree_node_base *param_2,basic_string *param_3)

{
  char cVar1;
  basic_string *pbVar2;
  long in_FS_OFFSET;
  _Rb_tree_node_base *local_40;
  _Rb_tree_node *local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_2;
  local_38 = param_1;
  while (local_38 != (_Rb_tree_node *)0x0) {
    pbVar2 = (basic_string *)_S_key(local_38);
    cVar1 = less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>::
            operator__((less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                        *)this,pbVar2,param_3);
    if (cVar1 == '\x01') {
      local_38 = (_Rb_tree_node *)_S_right((_Rb_tree_node_base *)local_38);
    }
    else {
      local_40 = (_Rb_tree_node_base *)local_38;
      local_38 = (_Rb_tree_node *)_S_left((_Rb_tree_node_base *)local_38);
    }
  }
  _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
  ::_Rb_tree_iterator((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                       *)&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_28;
}



// __gnu_cxx::__aligned_membuf<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>::_M_ptr()

void __thiscall
__gnu_cxx::
__aligned_membuf<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
::_M_ptr(__aligned_membuf_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
         *this)

{
  _M_addr(this);
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::_M_get_node()

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::_M_get_node(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
              *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_M_get_Node_allocator(this);
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>>
  ::allocate(paVar1,1);
  return;
}



// void std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>, std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>,
// std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::_M_construct_node<std::piecewise_construct_t const&,
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&&>,
// std::tuple<>>(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>*, std::piecewise_construct_t
// const&, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&>&&, std::tuple<>&&)

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::
_M_construct_node_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______std__tuple___
          (_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
           *this,_Rb_tree_node *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4
          )

{
  tuple *ptVar1;
  tuple *ptVar2;
  piecewise_construct_t *ppVar3;
  pair *ppVar4;
  allocator *paVar5;
  
  operator_new(0x48,param_1);
  ptVar1 = forward_std__tuple___((type *)param_4);
  ptVar2 = forward_std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______
                     ((type *)param_3);
  ppVar3 = forward_std__piecewise_construct_t_const__((type *)param_2);
  ppVar4 = (pair *)_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
                   ::_M_valptr((_Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                                *)param_1);
  paVar5 = (allocator *)_M_get_Node_allocator(this);
                    // try { // try from 00106db1 to 00106db5 has its CatchHandler @ 00106db8
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>>
  ::
  construct_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______std__tuple___
            (paVar5,ppVar4,ppVar3,ptVar2,ptVar1);
  return;
}



// std::_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>::_M_const_cast() const

undefined8 __thiscall
std::
_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
::_M_const_cast(_Rb_tree_const_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
  ::_Rb_tree_iterator((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                       *)&local_18,*(_Rb_tree_node_base **)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_18;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::size() const

undefined8 __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::size(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
       *this)

{
  return *(undefined8 *)(this + 0x28);
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::_M_rightmost()

_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
* __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::_M_rightmost(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
               *this)

{
  return this + 0x20;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::_S_key(std::_Rb_tree_node_base const*)

void std::
     _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
     ::_S_key(_Rb_tree_node_base *param_1)

{
  _S_key((_Rb_tree_node *)param_1);
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void
// (*)()>>>::_M_get_insert_unique_pos(std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const&)

undefined8 __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::_M_get_insert_unique_pos
          (_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
           *this,basic_string *param_1)

{
  char cVar1;
  basic_string *pbVar2;
  long in_FS_OFFSET;
  char local_59;
  _Rb_tree_node *local_58;
  _Rb_tree_node_base *local_50;
  _Rb_tree_node_base *local_48;
  _Rb_tree_node_base *local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (_Rb_tree_node *)_M_begin(this);
  local_50 = (_Rb_tree_node_base *)_M_end(this);
  local_59 = '\x01';
  while (local_58 != (_Rb_tree_node *)0x0) {
    local_50 = (_Rb_tree_node_base *)local_58;
    pbVar2 = (basic_string *)_S_key(local_58);
    local_59 = less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>::
               operator__((less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                           *)this,param_1,pbVar2);
    if (local_59 == '\0') {
      local_58 = (_Rb_tree_node *)_S_right((_Rb_tree_node_base *)local_58);
    }
    else {
      local_58 = (_Rb_tree_node *)_S_left((_Rb_tree_node_base *)local_58);
    }
  }
  _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
  ::_Rb_tree_iterator((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                       *)&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = begin(this);
    cVar1 = operator__((_Rb_tree_iterator *)&local_48,(_Rb_tree_iterator *)local_38);
    if (cVar1 != '\0') {
      pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
      pair_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void__________std___Rb_tree_node_base___true_
                ((pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *)local_38,&local_58,
                 &local_50);
      goto LAB_0010701c;
    }
    _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
    ::operator__((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                  *)&local_48);
  }
  pbVar2 = (basic_string *)_S_key(local_48);
  cVar1 = less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>::
          operator__((less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___
                      *)this,pbVar2,param_1);
  if (cVar1 == '\0') {
    local_40 = (_Rb_tree_node_base *)0x0;
    pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::pair_std___Rb_tree_node_base___true_
              ((pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *)local_38,&local_48,
               &local_40);
  }
  else {
    pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
    pair_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void__________std___Rb_tree_node_base___true_
              ((pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *)local_38,&local_58,
               &local_50);
  }
LAB_0010701c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::_M_leftmost()

_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
* __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::_M_leftmost(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
              *this)

{
  return this + 0x18;
}



// std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>::TEMPNAMEPLACEHOLDERVALUE()

_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
* __thiscall
std::
_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
::operator__(_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
             *this)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement(*(_Rb_tree_node_base **)this);
  *(undefined8 *)this = uVar1;
  return this;
}



// std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>::TEMPNAMEPLACEHOLDERVALUE()

_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
* __thiscall
std::
_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
::operator__(_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
             *this)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment(*(_Rb_tree_node_base **)this);
  *(undefined8 *)this = uVar1;
  return this;
}



// std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>::_M_valptr() const

void __thiscall
std::
_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
::_M_valptr(_Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
            *this)

{
  __gnu_cxx::
  __aligned_membuf<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
  ::_M_ptr((__aligned_membuf_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
            *)(this + 0x20));
  return;
}



// std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void
// (*)()>>::TEMPNAMEPLACEHOLDERVALUE(std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()> const&) const

pair * __thiscall
std::
_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
::operator__(_Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
             *this,pair *param_1)

{
  return param_1;
}



// std::_Head_base<0ul, std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const&, false>::_Head_base(std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const&)

void __thiscall
std::
_Head_base<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&,false>
::_Head_base(_Head_base_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__false_
             *this,basic_string *param_1)

{
  *(basic_string **)this = param_1;
  return;
}



// void std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>, std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>,
// std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::_M_construct_node<std::piecewise_construct_t const&,
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>, std::tuple<>>(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>*, std::piecewise_construct_t
// const&, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>&&, std::tuple<>&&)

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::
_M_construct_node_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___std__tuple___
          (_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
           *this,_Rb_tree_node *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4
          )

{
  tuple *ptVar1;
  tuple *ptVar2;
  piecewise_construct_t *ppVar3;
  pair *ppVar4;
  allocator *paVar5;
  
  operator_new(0x90,param_1);
  ptVar1 = forward_std__tuple___((type *)param_4);
  ptVar2 = forward_std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___
                     ((type *)param_3);
  ppVar3 = forward_std__piecewise_construct_t_const__((type *)param_2);
  ppVar4 = (pair *)_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
                   ::_M_valptr((_Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                                *)param_1);
  paVar5 = (allocator *)_M_get_Node_allocator(this);
                    // try { // try from 0010718b to 0010718f has its CatchHandler @ 00107192
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>>
  ::
  construct_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___std__tuple___
            (paVar5,ppVar4,ppVar3,ptVar2,ptVar1);
  return;
}



// void std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>, std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>,
// std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::_M_construct_node<std::piecewise_construct_t const&,
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>, std::tuple<>>(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>*, std::piecewise_construct_t
// const&, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>&&, std::tuple<>&&)

void __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::
_M_construct_node_std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___std__tuple___
          (_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
           *this,_Rb_tree_node *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4
          )

{
  tuple *ptVar1;
  tuple *ptVar2;
  piecewise_construct_t *ppVar3;
  pair *ppVar4;
  allocator *paVar5;
  
  operator_new(0x48,param_1);
  ptVar1 = forward_std__tuple___((type *)param_4);
  ptVar2 = forward_std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___
                     ((type *)param_3);
  ppVar3 = forward_std__piecewise_construct_t_const__((type *)param_2);
  ppVar4 = (pair *)_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
                   ::_M_valptr((_Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                                *)param_1);
  paVar5 = (allocator *)_M_get_Node_allocator(this);
                    // try { // try from 00107269 to 0010726d has its CatchHandler @ 00107270
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>>
  ::
  construct_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___std__tuple___
            (paVar5,ppVar4,ppVar3,ptVar2,ptVar1);
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::_M_get_Node_allocator()

_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
* __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::_M_get_Node_allocator
          (_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
           *this)

{
  return this;
}



// void 
// std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void
// (*)()>>>>::destroy<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void
// (*)()>>(std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>>&,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>*)

void std::
     allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>>
     ::
     destroy_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
               (allocator *param_1,pair *param_2)

{
  __gnu_cxx::
  new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
  ::
  destroy_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
            ((new_allocator_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
              *)param_1,param_2);
  return;
}



// std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void
// (*)()>>>>::deallocate(std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>>&,
// std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>*, unsigned long)

void std::
     allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>>
     ::deallocate(allocator *param_1,_Rb_tree_node *param_2,ulong param_3)

{
  __gnu_cxx::
  new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
  ::deallocate((_Rb_tree_node *)param_1,(ulong)param_2);
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::_M_get_Node_allocator()

_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
* __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::_M_get_Node_allocator
          (_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
           *this)

{
  return this;
}



// void 
// std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const,
// Account>>>>::destroy<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const,
// Account>>(std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>>&,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>*)

void std::
     allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>>
     ::
     destroy_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
               (allocator *param_1,pair *param_2)

{
  __gnu_cxx::
  new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
  ::
  destroy_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
            ((new_allocator_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
              *)param_1,param_2);
  return;
}



// std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const,
// Account>>>>::deallocate(std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>>&,
// std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>*, unsigned long)

void std::
     allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>>
     ::deallocate(allocator *param_1,_Rb_tree_node *param_2,ulong param_3)

{
  __gnu_cxx::
  new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
  ::deallocate((_Rb_tree_node *)param_1,(ulong)param_2);
  return;
}



// __gnu_cxx::__aligned_membuf<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>::_M_addr()

__aligned_membuf_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
* __thiscall
__gnu_cxx::
__aligned_membuf<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
::_M_addr(__aligned_membuf_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
          *this)

{
  return this;
}



// std::_Head_base<0ul, std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&, false>::_M_head(std::_Head_base<0ul, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>&&, false>&)

undefined8
std::
_Head_base<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&,false>
::_M_head(_Head_base *param_1)

{
  return *(undefined8 *)param_1;
}



// std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const,
// Account>>>>::allocate(std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>>&, unsigned long)

void std::
     allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>>
     ::allocate(allocator *param_1,ulong param_2)

{
  __gnu_cxx::
  new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
  ::allocate((ulong)param_1,(void *)param_2);
  return;
}



// void 
// std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const,
// Account>>>>::construct<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>, std::piecewise_construct_t const&,
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&&>,
// std::tuple<>>(std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>>&,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>*, std::piecewise_construct_t const&, std::tuple<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>&&>&&, std::tuple<>&&)

void std::
     allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>>
     ::
     construct_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______std__tuple___
               (allocator *param_1,pair *param_2,piecewise_construct_t *param_3,tuple *param_4,
               tuple *param_5)

{
  tuple *ptVar1;
  tuple *ptVar2;
  piecewise_construct_t *ppVar3;
  
  ptVar1 = forward_std__tuple___((type *)param_5);
  ptVar2 = forward_std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______
                     ((type *)param_4);
  ppVar3 = forward_std__piecewise_construct_t_const__((type *)param_3);
  __gnu_cxx::
  new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
  ::
  construct_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______std__tuple___
            ((new_allocator_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
              *)param_1,param_2,ppVar3,ptVar2,ptVar1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::_Rb_tree_node_base*&
// std::forward<std::_Rb_tree_node_base*&>(std::remove_reference<std::_Rb_tree_node_base*&>::type&)

_Rb_tree_node_base ** std::forward_std___Rb_tree_node_base___(type *param_1)

{
  return (_Rb_tree_node_base **)param_1;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::begin()

undefined8 __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::begin(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
        *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
  ::_Rb_tree_iterator((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
                       *)&local_18,*(_Rb_tree_node_base **)(this + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_18;
}



// std::pair<std::_Rb_tree_node_base*,
// std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>*&, std::_Rb_tree_node_base*&,
// true>(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>*&, std::_Rb_tree_node_base*&)

void __thiscall
std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
pair_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account_____std___Rb_tree_node_base___true_
          (pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *this,_Rb_tree_node **param_1,
          _Rb_tree_node_base **param_2)

{
  _Rb_tree_node **pp_Var1;
  _Rb_tree_node_base **pp_Var2;
  
  pp_Var1 = forward_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account_____
                      ((type *)param_1);
  *(_Rb_tree_node **)this = *pp_Var1;
  pp_Var2 = forward_std___Rb_tree_node_base___((type *)param_2);
  *(_Rb_tree_node_base **)(this + 8) = *pp_Var2;
  return;
}



// __gnu_cxx::__aligned_membuf<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>::_M_ptr() const

void __thiscall
__gnu_cxx::
__aligned_membuf<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
::_M_ptr(__aligned_membuf_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
         *this)

{
  _M_addr(this);
  return;
}



// __gnu_cxx::__aligned_membuf<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>::_M_addr()

__aligned_membuf_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
* __thiscall
__gnu_cxx::
__aligned_membuf<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
::_M_addr(__aligned_membuf_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
          *this)

{
  return this;
}



// std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void
// (*)()>>>>::allocate(std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>>&, unsigned long)

void std::
     allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>>
     ::allocate(allocator *param_1,ulong param_2)

{
  __gnu_cxx::
  new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
  ::allocate((ulong)param_1,(void *)param_2);
  return;
}



// void 
// std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void
// (*)()>>>>::construct<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>, std::piecewise_construct_t const&,
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&&>,
// std::tuple<>>(std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>>&,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>*, std::piecewise_construct_t const&, std::tuple<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>&&>&&, std::tuple<>&&)

void std::
     allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>>
     ::
     construct_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______std__tuple___
               (allocator *param_1,pair *param_2,piecewise_construct_t *param_3,tuple *param_4,
               tuple *param_5)

{
  tuple *ptVar1;
  tuple *ptVar2;
  piecewise_construct_t *ppVar3;
  
  ptVar1 = forward_std__tuple___((type *)param_5);
  ptVar2 = forward_std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______
                     ((type *)param_4);
  ppVar3 = forward_std__piecewise_construct_t_const__((type *)param_3);
  __gnu_cxx::
  new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
  ::
  construct_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______std__tuple___
            ((new_allocator_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
              *)param_1,param_2,ppVar3,ptVar2,ptVar1);
  return;
}



// std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>, std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>, std::less<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::begin()

undefined8 __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::begin(_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
        *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
  ::_Rb_tree_iterator((_Rb_tree_iterator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
                       *)&local_18,*(_Rb_tree_node_base **)(this + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_18;
}



// std::pair<std::_Rb_tree_node_base*,
// std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>*&, std::_Rb_tree_node_base*&,
// true>(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>*&, std::_Rb_tree_node_base*&)

void __thiscall
std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
pair_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void__________std___Rb_tree_node_base___true_
          (pair_std___Rb_tree_node_base__std___Rb_tree_node_base__ *this,_Rb_tree_node **param_1,
          _Rb_tree_node_base **param_2)

{
  _Rb_tree_node **pp_Var1;
  _Rb_tree_node_base **pp_Var2;
  
  pp_Var1 = forward_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void__________
                      ((type *)param_1);
  *(_Rb_tree_node **)this = *pp_Var1;
  pp_Var2 = forward_std___Rb_tree_node_base___((type *)param_2);
  *(_Rb_tree_node_base **)(this + 8) = *pp_Var2;
  return;
}



// __gnu_cxx::__aligned_membuf<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>::_M_ptr() const

void __thiscall
__gnu_cxx::
__aligned_membuf<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
::_M_ptr(__aligned_membuf_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
         *this)

{
  _M_addr(this);
  return;
}



// void 
// std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const,
// Account>>>>::construct<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>, std::piecewise_construct_t const&,
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>,
// std::tuple<>>(std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>>&,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>*, std::piecewise_construct_t const&, std::tuple<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const&>&&, std::tuple<>&&)

void std::
     allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>>
     ::
     construct_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___std__tuple___
               (allocator *param_1,pair *param_2,piecewise_construct_t *param_3,tuple *param_4,
               tuple *param_5)

{
  tuple *ptVar1;
  tuple *ptVar2;
  piecewise_construct_t *ppVar3;
  
  ptVar1 = forward_std__tuple___((type *)param_5);
  ptVar2 = forward_std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___
                     ((type *)param_4);
  ppVar3 = forward_std__piecewise_construct_t_const__((type *)param_3);
  __gnu_cxx::
  new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
  ::
  construct_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___std__tuple___
            ((new_allocator_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
              *)param_1,param_2,ppVar3,ptVar2,ptVar1);
  return;
}



// void 
// std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void
// (*)()>>>>::construct<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>, std::piecewise_construct_t const&,
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>,
// std::tuple<>>(std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>>&,
// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>*, std::piecewise_construct_t const&, std::tuple<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const&>&&, std::tuple<>&&)

void std::
     allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>>
     ::
     construct_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___std__tuple___
               (allocator *param_1,pair *param_2,piecewise_construct_t *param_3,tuple *param_4,
               tuple *param_5)

{
  tuple *ptVar1;
  tuple *ptVar2;
  piecewise_construct_t *ppVar3;
  
  ptVar1 = forward_std__tuple___((type *)param_5);
  ptVar2 = forward_std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___
                     ((type *)param_4);
  ppVar3 = forward_std__piecewise_construct_t_const__((type *)param_3);
  __gnu_cxx::
  new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
  ::
  construct_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___std__tuple___
            ((new_allocator_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
              *)param_1,param_2,ppVar3,ptVar2,ptVar1);
  return;
}



// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>::~pair()

void __thiscall
std::
pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>::
_pair(pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void______
      *this)

{
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)this);
  return;
}



// void __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void
// (*)()>>>::destroy<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>(std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>*)

void __thiscall
__gnu_cxx::
new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::
destroy_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
          (new_allocator_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
           *this,pair *param_1)

{
  std::
  pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>
  ::_pair((pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void______
           *)param_1);
  return;
}



// __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void
// (*)()>>>::deallocate(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>*, unsigned long)

void __gnu_cxx::
     new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
     ::deallocate(_Rb_tree_node *param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}



// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>::~pair()

void __thiscall
std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>
::_pair(pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account_
        *this)

{
  Account::_Account((Account *)(this + 0x20));
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)this);
  return;
}



// void __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const,
// Account>>>::destroy<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>(std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>*)

void __thiscall
__gnu_cxx::
new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::
destroy_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
          (new_allocator_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
           *this,pair *param_1)

{
  std::
  pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>::
  _pair((pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account_
         *)param_1);
  return;
}



// __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const,
// Account>>>::deallocate(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>*, unsigned long)

void __gnu_cxx::
     new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
     ::deallocate(_Rb_tree_node *param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}



// __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>>::allocate(unsigned long, void
// const*)

void __gnu_cxx::
     new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
     ::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 * 0x90);
  return;
}



// void __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const,
// Account>>>::construct<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>, std::piecewise_construct_t const&,
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&&>,
// std::tuple<>>(std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>*, std::piecewise_construct_t const&,
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&&>&&,
// std::tuple<>&&)

void __thiscall
__gnu_cxx::
new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::
construct_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______std__tuple___
          (new_allocator_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
           *this,pair *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  tuple *ptVar1;
  void *pvVar2;
  tuple extraout_DL;
  long in_FS_OFFSET;
  tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____ local_38 [8]
  ;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  std::forward_std__piecewise_construct_t_const__((type *)param_2);
  ptVar1 = std::
           forward_std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______
                     ((type *)param_3);
  std::tuple<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&>::tuple
            (local_38,ptVar1);
  std::forward_std__tuple___((type *)param_4);
  pvVar2 = operator_new(0x70,param_1);
                    // try { // try from 00107928 to 0010792c has its CatchHandler @ 0010792f
  std::
  pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>::
  pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
            (SUB81(pvVar2,0),SUB81(local_38,0),extraout_DL);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>*&
// std::forward<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const,
// Account>>*&>(std::remove_reference<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>*&>::type&)

_Rb_tree_node **
std::
forward_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account_____
          (type *param_1)

{
  return (_Rb_tree_node **)param_1;
}



// __gnu_cxx::__aligned_membuf<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>::_M_addr() const

__aligned_membuf_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
* __thiscall
__gnu_cxx::
__aligned_membuf<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>
::_M_addr(__aligned_membuf_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__
          *this)

{
  return this;
}



// __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>>::allocate(unsigned long, void
// const*)

void __gnu_cxx::
     new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
     ::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 * 0x48);
  return;
}



// void __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void
// (*)()>>>::construct<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>, std::piecewise_construct_t const&,
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&&>,
// std::tuple<>>(std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>*, std::piecewise_construct_t const&,
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&&>&&,
// std::tuple<>&&)

void __thiscall
__gnu_cxx::
new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::
construct_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______std__tuple___
          (new_allocator_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
           *this,pair *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  tuple *ptVar1;
  void *pvVar2;
  tuple extraout_DL;
  long in_FS_OFFSET;
  tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____ local_38 [8]
  ;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  std::forward_std__piecewise_construct_t_const__((type *)param_2);
  ptVar1 = std::
           forward_std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char______
                     ((type *)param_3);
  std::tuple<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&>::tuple
            (local_38,ptVar1);
  std::forward_std__tuple___((type *)param_4);
  pvVar2 = operator_new(0x28,param_1);
                    // try { // try from 00107a68 to 00107a6c has its CatchHandler @ 00107a6f
  std::
  pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>
  ::pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
            (SUB81(pvVar2,0),SUB81(local_38,0),extraout_DL);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>*&
// std::forward<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void
// (*)()>>*&>(std::remove_reference<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>*&>::type&)

_Rb_tree_node **
std::
forward_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void__________
          (type *param_1)

{
  return (_Rb_tree_node **)param_1;
}



// __gnu_cxx::__aligned_membuf<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>::_M_addr() const

__aligned_membuf_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
* __thiscall
__gnu_cxx::
__aligned_membuf<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>
::_M_addr(__aligned_membuf_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______
          *this)

{
  return this;
}



// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>::tuple(std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const&>&&)

void __thiscall
std::tuple<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&>::
tuple(tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__
      *this,tuple *param_1)

{
  _Tuple_impl<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&>
  ::_Tuple_impl((_Tuple_impl_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__
                 *)this,(_Tuple_impl *)param_1);
  return;
}



// void __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const,
// Account>>>::construct<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>, std::piecewise_construct_t const&,
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>, std::tuple<>>(std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>*, std::piecewise_construct_t const&,
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>&&, std::tuple<>&&)

void __thiscall
__gnu_cxx::
new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::
construct_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___std__tuple___
          (new_allocator_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
           *this,pair *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  tuple *ptVar1;
  void *pvVar2;
  tuple extraout_DL;
  long in_FS_OFFSET;
  tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__
  local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  std::forward_std__piecewise_construct_t_const__((type *)param_2);
  ptVar1 = std::
           forward_std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___
                     ((type *)param_3);
  std::tuple<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&>::
  tuple(local_38,ptVar1);
  std::forward_std__tuple___((type *)param_4);
  pvVar2 = operator_new(0x70,param_1);
                    // try { // try from 00107b82 to 00107b86 has its CatchHandler @ 00107b89
  std::
  pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>::
  pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__
            (SUB81(pvVar2,0),SUB81(local_38,0),extraout_DL);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// void __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void
// (*)()>>>::construct<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>, std::piecewise_construct_t const&,
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>, std::tuple<>>(std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>*, std::piecewise_construct_t const&,
// std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>&&, std::tuple<>&&)

void __thiscall
__gnu_cxx::
new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::
construct_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std__piecewise_construct_t_const__std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___std__tuple___
          (new_allocator_std___Rb_tree_node_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
           *this,pair *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  tuple *ptVar1;
  void *pvVar2;
  tuple extraout_DL;
  long in_FS_OFFSET;
  tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__
  local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  std::forward_std__piecewise_construct_t_const__((type *)param_2);
  ptVar1 = std::
           forward_std__tuple_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const___
                     ((type *)param_3);
  std::tuple<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&>::
  tuple(local_38,ptVar1);
  std::forward_std__tuple___((type *)param_4);
  pvVar2 = operator_new(0x28,param_1);
                    // try { // try from 00107c4e to 00107c52 has its CatchHandler @ 00107c55
  std::
  pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>
  ::pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__
            (SUB81(pvVar2,0),SUB81(local_38,0),extraout_DL);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, Account>>>::max_size() const

undefined8
__gnu_cxx::
new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::max_size(void)

{
  return 0xe38e38e38e38e3;
}



// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&>(std::piecewise_construct_t, std::tuple<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>&&>, std::tuple<>)

void std::
     pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>
     ::pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
               (piecewise_construct_t param_1,tuple param_2,tuple param_3)

{
  undefined7 in_register_00000031;
  undefined7 in_register_00000039;
  long in_FS_OFFSET;
  undefined local_29;
  tuple *local_28;
  tuple *local_20;
  long local_10;
  
  local_20 = (tuple *)CONCAT71(in_register_00000039,param_1);
  local_28 = (tuple *)CONCAT71(in_register_00000031,param_2);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____0ul_
            (local_20,local_28,(_Index_tuple)&local_29,(_Index_tuple)local_28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const, void (*)()>>>::max_size() const

undefined8
__gnu_cxx::
new_allocator<std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::max_size(void)

{
  return 0x1c71c71c71c71c7;
}



// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&>(std::piecewise_construct_t, std::tuple<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>&&>, std::tuple<>)

void std::
     pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>
     ::pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
               (piecewise_construct_t param_1,tuple param_2,tuple param_3)

{
  undefined7 in_register_00000031;
  undefined7 in_register_00000039;
  long in_FS_OFFSET;
  undefined local_29;
  tuple *local_28;
  tuple *local_20;
  long local_10;
  
  local_20 = (tuple *)CONCAT71(in_register_00000039,param_1);
  local_28 = (tuple *)CONCAT71(in_register_00000031,param_2);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____0ul_
            (local_20,local_28,(_Index_tuple)&local_29,(_Index_tuple)local_28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// std::_Tuple_impl<0ul, std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const&>::_Tuple_impl(std::_Tuple_impl<0ul, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const&>&&)

void __thiscall
std::
_Tuple_impl<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&>
::_Tuple_impl(_Tuple_impl_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__
              *this,_Tuple_impl *param_1)

{
  type *ptVar1;
  basic_string *pbVar2;
  
  ptVar1 = (type *)_M_head(param_1);
  pbVar2 = forward_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__
                     (ptVar1);
  _Head_base<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&,false>
  ::_Head_base((_Head_base_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__false_
                *)this,pbVar2);
  return;
}



// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>(std::piecewise_construct_t, std::tuple<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const&>, std::tuple<>)

void std::
     pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>
     ::pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__
               (piecewise_construct_t param_1,tuple param_2,tuple param_3)

{
  undefined7 in_register_00000031;
  undefined7 in_register_00000039;
  long in_FS_OFFSET;
  undefined local_29;
  tuple *local_28;
  tuple *local_20;
  long local_10;
  
  local_20 = (tuple *)CONCAT71(in_register_00000039,param_1);
  local_28 = (tuple *)CONCAT71(in_register_00000031,param_2);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__0ul_
            (local_20,local_28,(_Index_tuple)&local_29,(_Index_tuple)local_28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>(std::piecewise_construct_t, std::tuple<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const&>, std::tuple<>)

void std::
     pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>
     ::pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__
               (piecewise_construct_t param_1,tuple param_2,tuple param_3)

{
  undefined7 in_register_00000031;
  undefined7 in_register_00000039;
  long in_FS_OFFSET;
  undefined local_29;
  tuple *local_28;
  tuple *local_20;
  long local_10;
  
  local_20 = (tuple *)CONCAT71(in_register_00000039,param_1);
  local_28 = (tuple *)CONCAT71(in_register_00000031,param_2);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__0ul_
            (local_20,local_28,(_Index_tuple)&local_29,(_Index_tuple)local_28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&&,
// 0ul>(std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&>&, std::tuple<>&, std::_Index_tuple<0ul>, std::_Index_tuple<>)

void std::
     pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>
     ::pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____0ul_
               (tuple *param_1,tuple *param_2,_Index_tuple param_3,_Index_tuple param_4)

{
  type *ptVar1;
  
  ptVar1 = get_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
                     (param_2);
  forward_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
            ((type *)ptVar1);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
            ((basic_string *)param_1);
                    // try { // try from 00107e91 to 00107e95 has its CatchHandler @ 00107e98
  Account::Account((Account *)(param_1 + 0x20));
  return;
}



// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&, 0ul>(std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&>&, std::tuple<>&, std::_Index_tuple<0ul>, std::_Index_tuple<>)

void std::
     pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>
     ::pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____0ul_
               (tuple *param_1,tuple *param_2,_Index_tuple param_3,_Index_tuple param_4)

{
  type *ptVar1;
  
  ptVar1 = get_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
                     (param_2);
  forward_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
            ((type *)ptVar1);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
            ((basic_string *)param_1);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// std::_Tuple_impl<0ul, std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const&>::_M_head(std::_Tuple_impl<0ul, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const&>&)

void std::
     _Tuple_impl<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&>
     ::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&,false>
  ::_M_head((_Head_base *)param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&
// std::forward<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&>(std::remove_reference<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const&>::type&)

basic_string *
std::forward_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__
          (type *param_1)

{
  return (basic_string *)param_1;
}



// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// Account>::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&, 0ul>(std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const&>&, std::tuple<>&, std::_Index_tuple<0ul>, std::_Index_tuple<>)

void std::
     pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>
     ::pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__0ul_
               (tuple *param_1,tuple *param_2,_Index_tuple param_3,_Index_tuple param_4)

{
  type *ptVar1;
  
  ptVar1 = get_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__
                     (param_2);
  forward_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__
            ((type *)ptVar1);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
            ((basic_string *)param_1);
                    // try { // try from 00107f85 to 00107f89 has its CatchHandler @ 00107f8c
  Account::Account((Account *)(param_1 + 0x20));
  return;
}



// std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const,
// void (*)()>::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>
// const&, 0ul>(std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const&>&, std::tuple<>&, std::_Index_tuple<0ul>, std::_Index_tuple<>)

void std::
     pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>
     ::pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__0ul_
               (tuple *param_1,tuple *param_2,_Index_tuple param_3,_Index_tuple param_4)

{
  type *ptVar1;
  
  ptVar1 = get_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__
                     (param_2);
  forward_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__
            ((type *)ptVar1);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
            ((basic_string *)param_1);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::tuple_element<0ul, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&>>::type& std::get<0ul, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>&&>(std::tuple<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>&&>&)

type * std::get_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
                 (tuple *param_1)

{
  basic_string *pbVar1;
  
  pbVar1 = __get_helper_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
                     ((_Tuple_impl *)param_1);
  return (type *)pbVar1;
}



// std::_Head_base<0ul, std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const&, false>::_M_head(std::_Head_base<0ul,
// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, false>&)

undefined8
std::
_Head_base<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&,false>
::_M_head(_Head_base *param_1)

{
  return *(undefined8 *)param_1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::tuple_element<0ul, std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const&>>::type& std::get<0ul, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const&>(std::tuple<std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const&>&)

type * std::
       get_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__
                 (tuple *param_1)

{
  basic_string *pbVar1;
  
  pbVar1 = __get_helper_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__
                     ((_Tuple_impl *)param_1);
  return (type *)pbVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&
// std::__get_helper<0ul, std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&&>(std::_Tuple_impl<0ul, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>&&>&)

basic_string *
std::
__get_helper_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
          (_Tuple_impl *param_1)

{
  basic_string *pbVar1;
  
  pbVar1 = (basic_string *)
           _Tuple_impl<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>&&>
           ::_M_head(param_1);
  return pbVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&
// std::__get_helper<0ul, std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const&>(std::_Tuple_impl<0ul, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>> const&>&)

basic_string *
std::
__get_helper_0ul_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const__
          (_Tuple_impl *param_1)

{
  basic_string *pbVar1;
  
  pbVar1 = (basic_string *)
           _Tuple_impl<0ul,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&>
           ::_M_head(param_1);
  return pbVar1;
}



// std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, void
// (*)(), std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, void (*)()>>>::~map()

void __thiscall
std::
map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,void(*)(),std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
::_map(map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___void______std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
       *this)

{
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,void(*)()>>>
  ::__Rb_tree((_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void_______std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_void________
               *)this);
  return;
}



// std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, Account,
// std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>,
// std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const, Account>>>::~map()

void __thiscall
std::
map<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,Account,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
::_map(map_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___Account_std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
       *this)

{
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const,Account>>>
  ::__Rb_tree((_Rb_tree_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char___std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account__std___Select1st_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___std__less_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator_std__pair_std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char__const_Account___
               *)this);
  return;
}



void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _init(param_1);
  lVar1 = 0;
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)param_1 & 0xffffffff,param_2,param_3)
    ;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 2);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}


