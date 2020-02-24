FROM dnlpozzobon/qmk:1

COPY . /qmk_firmware/keyboards/evil80/
COPY ./.docker/entrypoint.sh ./entrypoint.sh

ENTRYPOINT [ "./entrypoint.sh" ]
