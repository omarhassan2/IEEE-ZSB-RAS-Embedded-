/* 
 * File:   spi_cfg.h
 * Author: Omar Hassan
 *
 * Created on August 13, 2024, 7:33 PM
 */

#ifndef SPI_CFG_H
#define	SPI_CFG_H

/*Option For Mode:
    1-SPI_MASTER
    2-SPI_SLAVE 
*/
#define SPI_MODE    SPI_SLAVE

/*Option For Data Order:
    1-LSB
    2-MSB
*/
#define SPI_DATA_ORDER  LSB

/*Option For Clock Polarity:
    1-LEADING_RISING
    2-LEADING_FALLING
*/
#define SPI_CLOCK_POLARITY  LEADING_RISING

/*Option For Clock Phase:
    1-LEADING_SAMPLE
    2-LEADING_SETUP
*/
#define SPI_CLOCK_PHASE LEADING_SETUP

/*Option For Clock Prescaler :
    1-DIV_2
    2-DIV_4
    3-DIV_8
    4-DIV_16
    5-DIV_32
    6-DIV_64
    7-DIV_128
*/
#define SPI_CLOCK_PRESCALER DIV_128

#endif	/* SPI_CFG_H */

