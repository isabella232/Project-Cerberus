// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

#ifndef COUNTER_MANAGER_H_
#define COUNTER_MANAGER_H_

#include "status/rot_status.h"


#define	COUNTER_MANAGER_ERROR(code)		ROT_ERROR (ROT_MODULE_COUNTER_MANAGER, code)

/**
 * Error codes that can be generated by the counter manager.
 *
 */
enum {
	COUNTER_MANAGER_INVALID_ARGUMENT = COUNTER_MANAGER_ERROR (0x00),		/**< Input parameter is null or not valid. */
	COUNTER_MANAGER_NO_MEMORY = COUNTER_MANAGER_ERROR (0x01),				/**< Memory allocation failed. */
	COUNTER_MANAGER_UNKNOWN_COUNTER = COUNTER_MANAGER_ERROR (0x02),			/**< Invalid counter. */
};


#endif /* COUNTER_MANAGER_H_ */