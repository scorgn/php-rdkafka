/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: a72d2e1796ed7f89185f543973c659a6a704f347 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RdKafka_Conf___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

#if (PHP_VERSION_ID >= 80100)
ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_RdKafka_Conf_dump, 0, 0, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RdKafka_Conf_dump, 0, 0, 0)
#endif
ZEND_END_ARG_INFO()

#if (PHP_VERSION_ID >= 80100)
ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_RdKafka_Conf_set, 0, 2, IS_VOID, 0)
#else
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RdKafka_Conf_set, 0, 0, 2)
#endif
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

#if (PHP_VERSION_ID >= 80100)
ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_RdKafka_Conf_setDefaultTopicConf, 0, 1, IS_VOID, 0)
#else
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RdKafka_Conf_setDefaultTopicConf, 0, 0, 1)
#endif
	ZEND_ARG_OBJ_INFO(0, topic_conf, RdKafka\\TopicConf, 0)
ZEND_END_ARG_INFO()

#if (PHP_VERSION_ID >= 80100)
ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_RdKafka_Conf_setErrorCb, 0, 1, IS_VOID, 0)
#else
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RdKafka_Conf_setErrorCb, 0, 0, 1)
#endif
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_RdKafka_Conf_setDrMsgCb arginfo_class_RdKafka_Conf_setErrorCb

#define arginfo_class_RdKafka_Conf_setStatsCb arginfo_class_RdKafka_Conf_setErrorCb

#define arginfo_class_RdKafka_Conf_setRebalanceCb arginfo_class_RdKafka_Conf_setErrorCb

#define arginfo_class_RdKafka_Conf_setConsumeCb arginfo_class_RdKafka_Conf_setErrorCb

#define arginfo_class_RdKafka_Conf_setOffsetCommitCb arginfo_class_RdKafka_Conf_setErrorCb

#define arginfo_class_RdKafka_Conf_setLogCb arginfo_class_RdKafka_Conf_setErrorCb

#if defined(HAS_RD_KAFKA_OAUTHBEARER)
#if (PHP_VERSION_ID >= 80100)
ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_RdKafka_Conf_setOauthbearerTokenRefreshCb, 0, 1, IS_VOID, 0)
#else
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RdKafka_Conf_setOauthbearerTokenRefreshCb, 0, 0, 1)
#endif
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()
#endif

#define arginfo_class_RdKafka_TopicConf___construct arginfo_class_RdKafka_Conf___construct

#define arginfo_class_RdKafka_TopicConf_dump arginfo_class_RdKafka_Conf_dump

#define arginfo_class_RdKafka_TopicConf_set arginfo_class_RdKafka_Conf_set

#if (PHP_VERSION_ID >= 80100)
ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_RdKafka_TopicConf_setPartitioner, 0, 1, IS_VOID, 0)
#else
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RdKafka_TopicConf_setPartitioner, 0, 0, 1)
#endif
	ZEND_ARG_TYPE_INFO(0, partitioner, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(RdKafka_Conf, __construct);
ZEND_METHOD(RdKafka_Conf, dump);
ZEND_METHOD(RdKafka_Conf, set);
ZEND_METHOD(RdKafka_Conf, setDefaultTopicConf);
ZEND_METHOD(RdKafka_Conf, setErrorCb);
ZEND_METHOD(RdKafka_Conf, setDrMsgCb);
ZEND_METHOD(RdKafka_Conf, setStatsCb);
ZEND_METHOD(RdKafka_Conf, setRebalanceCb);
ZEND_METHOD(RdKafka_Conf, setConsumeCb);
ZEND_METHOD(RdKafka_Conf, setOffsetCommitCb);
ZEND_METHOD(RdKafka_Conf, setLogCb);
#if defined(HAS_RD_KAFKA_OAUTHBEARER)
ZEND_METHOD(RdKafka_Conf, setOauthbearerTokenRefreshCb);
#endif
ZEND_METHOD(RdKafka_TopicConf, __construct);
ZEND_METHOD(RdKafka_TopicConf, setPartitioner);

static const zend_function_entry class_RdKafka_Conf_methods[] = {
	ZEND_ME(RdKafka_Conf, __construct, arginfo_class_RdKafka_Conf___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Conf, dump, arginfo_class_RdKafka_Conf_dump, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Conf, set, arginfo_class_RdKafka_Conf_set, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Conf, setDefaultTopicConf, arginfo_class_RdKafka_Conf_setDefaultTopicConf, ZEND_ACC_PUBLIC|ZEND_ACC_DEPRECATED)
	ZEND_ME(RdKafka_Conf, setErrorCb, arginfo_class_RdKafka_Conf_setErrorCb, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Conf, setDrMsgCb, arginfo_class_RdKafka_Conf_setDrMsgCb, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Conf, setStatsCb, arginfo_class_RdKafka_Conf_setStatsCb, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Conf, setRebalanceCb, arginfo_class_RdKafka_Conf_setRebalanceCb, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Conf, setConsumeCb, arginfo_class_RdKafka_Conf_setConsumeCb, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Conf, setOffsetCommitCb, arginfo_class_RdKafka_Conf_setOffsetCommitCb, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Conf, setLogCb, arginfo_class_RdKafka_Conf_setLogCb, ZEND_ACC_PUBLIC)
#if defined(HAS_RD_KAFKA_OAUTHBEARER)
	ZEND_ME(RdKafka_Conf, setOauthbearerTokenRefreshCb, arginfo_class_RdKafka_Conf_setOauthbearerTokenRefreshCb, ZEND_ACC_PUBLIC)
#endif
	ZEND_FE_END
};

static const zend_function_entry class_RdKafka_TopicConf_methods[] = {
	ZEND_ME(RdKafka_TopicConf, __construct, arginfo_class_RdKafka_TopicConf___construct, ZEND_ACC_PUBLIC)
#if (PHP_VERSION_ID >= 80400)
	ZEND_RAW_FENTRY("dump", zim_RdKafka_Conf_dump, arginfo_class_RdKafka_TopicConf_dump, ZEND_ACC_PUBLIC, NULL, NULL)
#else
	ZEND_RAW_FENTRY("dump", zim_RdKafka_Conf_dump, arginfo_class_RdKafka_TopicConf_dump, ZEND_ACC_PUBLIC)
#endif
#if (PHP_VERSION_ID >= 80400)
	ZEND_RAW_FENTRY("set", zim_RdKafka_Conf_set, arginfo_class_RdKafka_TopicConf_set, ZEND_ACC_PUBLIC, NULL, NULL)
#else
	ZEND_RAW_FENTRY("set", zim_RdKafka_Conf_set, arginfo_class_RdKafka_TopicConf_set, ZEND_ACC_PUBLIC)
#endif
	ZEND_ME(RdKafka_TopicConf, setPartitioner, arginfo_class_RdKafka_TopicConf_setPartitioner, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_RdKafka_Conf(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "RdKafka", "Conf", class_RdKafka_Conf_methods);
#if (PHP_VERSION_ID >= 80400)
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, 0);
#else
	class_entry = zend_register_internal_class_ex(&ce, NULL);
#endif

	return class_entry;
}

static zend_class_entry *register_class_RdKafka_TopicConf(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "RdKafka", "TopicConf", class_RdKafka_TopicConf_methods);
#if (PHP_VERSION_ID >= 80400)
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, 0);
#else
	class_entry = zend_register_internal_class_ex(&ce, NULL);
#endif

	return class_entry;
}
