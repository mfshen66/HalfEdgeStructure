#ifndef COMMON_MAC_DEFINITION_H_
#define COMMON_MAC_DEFINITION_H_

/// 释放指针
#define SYS_DELETE_PTR(Ptr)				\
							delete Ptr; \
							Ptr = nullptr;

/// 释放数组
#define SYS_DELETE_TABLE(Table)					\
								delete []Table;	\
								Table = nullptr;


#endif // !COMMON_MAC_DEFINITION_H_