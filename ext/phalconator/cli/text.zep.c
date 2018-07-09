
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/operators.h"
#include "kernel/exception.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/concat.h"
#include "kernel/fcall.h"


/**
 * Phalcon\Cli\Text
 *
 * <p>Phalcon\Cli\Text is simply text</p>
 */
ZEPHIR_INIT_CLASS(Phalconator_Cli_Text) {

	ZEPHIR_REGISTER_CLASS(Phalconator\\Cli, Text, phalconator, cli_text, phalconator_cli_text_method_entry, 0);

	zend_declare_property_null(phalconator_cli_text_ce, SL("_data"), ZEND_ACC_PROTECTED TSRMLS_CC);

	return SUCCESS;

}

/**
 * Phalconator\Cli\Text constructor
 */
PHP_METHOD(Phalconator_Cli_Text, __construct) {

	zval *data_param = NULL;
	zval data;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&data);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &data_param);

	zephir_get_strval(&data, data_param);


	if (ZEPHIR_IS_EMPTY(&data)) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(phalconator_cli_exception_ce, "Data is required", "phalconator/cli/text.zep", 39);
		return;
	}
	zephir_update_property_zval(this_ptr, SL("_data"), &data);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Phalconator_Cli_Text, __toString) {

	zval _0, _1;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, SL("_data"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_1);
	ZEPHIR_GET_CONSTANT(&_1, "PHP_EOL");
	ZEPHIR_CONCAT_VV(return_value, &_0, &_1);
	RETURN_MM();

}

PHP_METHOD(Phalconator_Cli_Text, clear) {

	zval _0, _2;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_1 = NULL;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_2, this_ptr, SL("_data"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_CE_STATIC(&_0, phalconator_cli_text_color_ce, "clear", &_1, 0, &_2);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("_data"), &_0);
	RETURN_THIS();

}

PHP_METHOD(Phalconator_Cli_Text, line) {

	zval _0, _1, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, SL("_data"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&_1);
	ZEPHIR_GET_CONSTANT(&_1, "PHP_EOL");
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_VV(&_2, &_0, &_1);
	zephir_update_property_zval(this_ptr, SL("_data"), &_2);
	RETURN_THIS();

}

PHP_METHOD(Phalconator_Cli_Text, colorize) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_1 = NULL;
	zval *color = NULL, color_sub, *background = NULL, background_sub, *style = NULL, style_sub, __$null, _0, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&color_sub);
	ZVAL_UNDEF(&background_sub);
	ZVAL_UNDEF(&style_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 3, &color, &background, &style);

	if (!color) {
		color = &color_sub;
		color = &__$null;
	}
	if (!background) {
		background = &background_sub;
		background = &__$null;
	}
	if (!style) {
		style = &style_sub;
		style = &__$null;
	}


	zephir_read_property(&_2, this_ptr, SL("_data"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_CE_STATIC(&_0, phalconator_cli_text_color_ce, "render", &_1, 0, &_2, color, background, style);
	zephir_check_call_status();
	zephir_update_property_zval(this_ptr, SL("_data"), &_0);
	RETURN_THIS();

}

