import { Card, CardBody, CardFooter, Image } from "@heroui/react";
import { title } from "@/components/primitives";
import DefaultLayout from "@/layouts/default";
import Arduino_c from "@/Images/Certificate/Project_development_Arduino.jpg"; 
import IIITNRVT_C from "@/Images/Certificate/IIIT VT.jpg";
import BLOCKCHAIN from "@/Images/Certificate/NPTEL Blockchain.jpg";
import IIIT_Dangle from "@/Images/Certificate/IIIT Dangle.jpg";
import COEP_PUNE_Robowar_C from "@/Images/Certificate/Pune Robowar 2nd.jpg";
import DGCA from "@/Images/Certificate/DGCA_Drone_Pilot.jpg";


export default function ProjectPage() {
  const list = [
    {
      title: "Line Follower Robot",
      img: Arduino_c, 
      price: "Bot", 
    },
    {
      title: "IIIT NR Dangle Bot",
      img: IIIT_Dangle, 
      price: "Bot",
    },
    {
      title: "COEP Pune Roboawar ",
      img: COEP_PUNE_Robowar_C,
      price: "Robowar Bot",
    },
    {
      title: "NPTEL BlockChain",
      img: BLOCKCHAIN,
      price: "Blockchain",
    },
    {
      title: "Plant Disease Detection",
      img: IIITNRVT_C,
      price: "ML-DL Model",
    },
    {
      title: "DGCA Dron Pilot",
      img: DGCA,
      price: "Dron Pilot",
    },
  ];

  return (
    <DefaultLayout>
      <section className="flex flex-col items-center justify-center gap-4 py-8 md:py-10">
        <div className="inline-block max-w-lg text-center justify-center">
          <h1 className={title()}>Certificate</h1>
        </div>
        <div className="gap-4 grid grid-cols-2 sm:grid-cols-3">
          {list.map((item, index) => (
            <Card shadow="sm" key={index} isPressable onPress={() => console.log("item pressed")}>
              <CardBody className="overflow-visible p-0">
                <Image
                  shadow="sm"
                  radius="lg"
                  width="100%"
                  alt={item.title}
                  className="w-full object-cover h-[180px]"
                  src={item.img}
                />
              </CardBody>
              <CardFooter className="text-small justify-between">
                <b>{item.title}</b>
                <p className="text-default-500">{item.price}</p>
              </CardFooter>
            </Card>
          ))}
        </div>
      </section>
    </DefaultLayout>
  );
}