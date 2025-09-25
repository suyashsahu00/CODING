import { title } from "@/components/primitives";
import DefaultLayout from "@/layouts/default";
import { Chip } from "@heroui/react";

export default function DocsPage() {
  return (
    <DefaultLayout>
      <section className="flex flex-col items-center justify-center gap-4 py-8 md:py-10">
        <div className="inline-block max-w-lg text-center justify-center">
          <h1 className={title()}>Skills</h1>
          <br /><br /><br /><br />
          <div className="flex flex-row items-center justify-center gap-4">
            <Chip
              size="lg"
              color="warning"
              variant="shadow"
              classNames={{ base: "text-2xl px-12 py-10" }}
            >
              C++
            </Chip>
            <Chip
              size="lg"
              color="primary"
              variant="shadow"
              classNames={{ base: "text-2xl px-12 py-10" }}
            >
              HTML
            </Chip>
            <Chip
              size="lg"
              color="danger"
              variant="shadow"
              classNames={{ base: "text-2xl px-12 py-10" }}
            >
              CSS
            </Chip>
            <Chip
              size="lg"
              color="success"
              variant="shadow"
              classNames={{ base: "text-2xl px-12 py-10" }}
            >
              JS
            </Chip>
            <Chip
              size="lg"
              color="secondary"
              variant="shadow"
              classNames={{ base: "text-2xl px-12 py-10" }}
            >
              Tailwind
            </Chip>
            <Chip
              size="lg"
              color="default"
              variant="shadow"
              classNames={{ base: "text-2xl px-12 py-10" }}
            >
              React
            </Chip>
          </div>
          <br /> <br /><br />
          <div className="flex flex-row items-center justify-center gap-4">
            <Chip
              size="lg"
              color="primary"
              variant="shadow"
              classNames={{ base: "text-2xl px-12 py-10" }}
            >
              Arduino
            </Chip>
            <Chip
              size="lg"
              color="warning"
              variant="shadow"
              classNames={{ base: "text-2xl px-12 py-10" }}
            >
              Robotics
            </Chip>
            <Chip
              size="lg"
              color="danger"
              variant="shadow"
              classNames={{ base: "text-2xl px-12 py-10" }}
            >
              Fusion-360
            </Chip>
            <Chip
              size="lg"
              color="success"
              variant="shadow"
              classNames={{ base: "text-2xl px-12 py-10" }}
            >
              Thinker-CAD
            </Chip>
          </div>
        </div>
      </section>
    </DefaultLayout>
  );
}