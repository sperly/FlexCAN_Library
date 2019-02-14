
/*
 * \brief Interrupt handler for FlexCAN can0 message events.
 *
 * \param None.
 *
 * \retval None.
 *
 */
void can0_message_isr (void)
{
    Can0.message_isr ();
}

/*
 * \brief Interrupt handler for FlexCAN can0 bus off event.
 *
 * \param None.
 *
 * \retval None.
 *
 */
void can0_bus_off_isr (void)
{
    Can0.bus_off_isr ();
}

/*
 * \brief Interrupt handler for FlexCAN can0 error events.
 *
 * \param None.
 *
 * \retval None.
 *
 */
void can0_error_isr (void)
{
    Can0.error_isr ();
}

/*
 * \brief Interrupt handler for FlexCAN can0 transmit warning event.
 *
 * \param None.
 *
 * \retval None.
 *
 */
void can0_tx_warn_isr (void)
{
    Can0.tx_warn_isr ();
}

/*
 * \brief Interrupt handler for FlexCAN can0 receive warning event.
 *
 * \param None.
 *
 * \retval None.
 *
 */
void can0_rx_warn_isr (void)
{
    Can0.rx_warn_isr ();
}

/*
 * \brief Interrupt handler for FlexCAN can0 device wakeup event.
 *
 * \param None.
 *
 * \retval None.
 *
 */
void can0_wakeup_isr (void)
{
    Can0.wakeup_isr ();
}

#if defined(INCLUDE_FLEXCAN_CAN1)

/*
 * \brief Interrupt handler for FlexCAN can1 message events.
 *
 * \param None.
 *
 * \retval None.
 *
 */
void can1_message_isr (void)
{
    Can1.message_isr ();
}

/*
 * \brief Interrupt handler for FlexCAN can1 bus off event.
 *
 * \param None.
 *
 * \retval None.
 *
 */
void can1_bus_off_isr (void)
{
    Can1.bus_off_isr ();
}

/*
 * \brief Interrupt handler for FlexCAN can1 error events.
 *
 * \param None.
 *
 * \retval None.
 *
 */
void can1_error_isr (void)
{
    Can1.error_isr ();
}

/*
 * \brief Interrupt handler for FlexCAN can1 transmit warning event.
 *
 * \param None.
 *
 * \retval None.
 *
 */
void can1_tx_warn_isr (void)
{
    Can1.tx_warn_isr ();
}

/*
 * \brief Interrupt handler for FlexCAN can1 receive warning event.
 *
 * \param None.
 *
 * \retval None.
 *
 */
void can1_rx_warn_isr (void)
{
    Can1.rx_warn_isr ();
}

/*
 * \brief Interrupt handler for FlexCAN can1 device wakeup event.
 *
 * \param None.
 *
 * \retval None.
 *
 */
void can1_wakeup_isr (void)
{
    Can1.wakeup_isr ();
}

#endif /* INCLUDE_FLEXCAN_CAN1 */

