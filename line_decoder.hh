//
//  line_decoder.hh
//
//  Created by Erick Li on 04/16/19.
//  Copyright © 2019 Erick Li. All rights reserved.
//

#ifndef __LINE_DECODER_H__
#define __LINE_DECODER_H__

#include <fstream>
#include <string>
#include <iostream>

/**
 * The main function of line pattern decoder.
 * \param (See json_writer.hh)
 * \param (See json_writer.hh)
 * \param (See json_writer.hh)
 * \param the type:
 *     0: Normal;
 *     1: Symbol.
 * \param the property, which can be `outline` etc.
 */
void decodeLinePattern(char **cursor, std::string &jstring, int level, int type,
                      std::string property);

/**
 * Decode the pattern of Simple Line Symbol
 * \param (See json_writer.hh)
 * \param (See json_writer.hh)
 * \param (See json_writer.hh)
 */
void decodeSimpleLine(char **cursor, std::string &jstring, int level);

/**
 * Decode the pattern of Cartographical Line Symbol
 * \param (See json_writer.hh)
 * \param (See json_writer.hh)
 * \param (See json_writer.hh)
 */
void decodeCartoLine(char **cursor, std::string &jstring, int level);

/**
 * Decode the pattern of Hash Line Symbol
 * \param (See json_writer.hh)
 * \param (See json_writer.hh)
 * \param (See json_writer.hh)
 */
void decodeHashLine(char **cursor, std::string &jstring, int level);

/**
 * Decode the pattern of Marker Line Symbol
 * \param (See json_writer.hh)
 * \param (See json_writer.hh)
 * \param (See json_writer.hh)
 */
void decodeMarkerLine(char **cursor, std::string &jstring, int level);

/**
 * Decode the pattern of line caps
 * \param (See json_writer.hh)
 * \param (See json_writer.hh)
 * \param (See json_writer.hh)
 */
int decodeLineCaps(char **cursor, std::string &jstring, int level);

/**
 * Decode the pattern of line joins
 * \param (See json_writer.hh)
 * \param (See json_writer.hh)
 * \param (See json_writer.hh)
 */
int decodeLineJoins(char **cursor, std::string &jstring, int level);

/**
 * Decode the pattern of line styles
 * \param (See json_writer.hh)
 * \param (See json_writer.hh)
 * \param (See json_writer.hh)
 */
int decodeLineStyle(char **cursor, std::string &jstring, int level);

/**
 * Decode the line style
 *     TEMPLATE is for line dot-dash patterns.
 *     interval length -> line length -> gap length.
 * \param (See json_writer.hh)
 * \param (See json_writer.hh)
 * \param (See json_writer.hh)
 * \param type type of template feed (0: hash/carto line; 1: marker line)
 */
void decodeTemplate(char **cursor, std::string &jstring, int level, int type);

#endif
