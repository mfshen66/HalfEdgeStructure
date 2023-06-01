#ifndef COMMON_MAC_DEFINITION_H_
#define COMMON_MAC_DEFINITION_H_

/// �ͷ�ָ��
#define SYS_DELETE_PTR(Ptr)					\
							if (Ptr)		\
							{				\
								delete Ptr; \
							}				\
							Ptr = nullptr;	

/// �ͷ�����
#define SYS_DELETE_TABLE(Table)						\
								if (Table)			\
								{					\
									delete []Table; \
								}					\
								Table = nullptr;	


#endif // !COMMON_MAC_DEFINITION_H_