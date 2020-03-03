// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

#ifndef MANIFEST_PCR_H_
#define MANIFEST_PCR_H_

#include <stdint.h>
#include "manifest.h"
#include "crypto/hash.h"
#include "attestation/pcr_store.h"


/**
 * PCR management for a single manifest.  This is not a stand-alone module, and should only be used
 * as part of a parent module.
 */
struct manifest_pcr {
	struct hash_engine *hash;		/**< The hash engine for generating measurements. */
	struct pcr_store *store;		/**< Storage for PCR measurements. */
	uint16_t measurement_id;		/**< The type identifier for the measurement. */
};


int manifest_pcr_init (struct manifest_pcr *pcr, struct hash_engine *hash,
	struct pcr_store *store, uint16_t measurement_type);
void manifest_pcr_release (struct manifest_pcr *pcr);

void manifest_pcr_record_manifest_measurement (struct manifest_pcr *pcr, struct manifest *active);


#endif /* MANIFEST_PCR_H_ */