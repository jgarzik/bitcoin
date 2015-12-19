// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_CONSENSUS_CONSENSUS_H
#define BITCOIN_CONSENSUS_CONSENSUS_H

#include <stdint.h>

static const uint64_t BIP202_FORK_HEIGHT = 406800;  // approx. May 5 2016
static const uint64_t BIP202_FORK_CAP = BIP202_FORK_HEIGHT + 300000;

/** The maximum allowed size for a serialized block, in bytes (network rule) */
inline unsigned int MaxBlockSize(unsigned int nHeight) {
    if (nHeight < BIP202_FORK_HEIGHT)
        return 1000*1000;
    if (nHeight >= BIP202_FORK_CAP)
        return 8*1000*1000;

    return (2*1000*1000) + (20 * (nHeight - BIP202_FORK_HEIGHT));
}

/** The maximum allowed size for a serialized transaction, in bytes */
static const unsigned int MAX_TRANSACTION_SIZE = 1000*1000;

/** The maximum allowed number of signature check operations in a block (network rule) */
inline unsigned int MaxBlockSigops(unsigned int nHeight) {
    return MaxBlockSize(nHeight) / 50;
}

/** Coinbase transaction outputs can only be spent after this number of new blocks (network rule) */
static const int COINBASE_MATURITY = 100;

/** Flags for LockTime() */
enum {
    /* Use GetMedianTimePast() instead of nTime for end point timestamp. */
    LOCKHEIGHT_MEDIAN_HEIGHT_PAST = (1 << 1),
};

#endif // BITCOIN_CONSENSUS_CONSENSUS_H
